#include "EasyObjects.h"
#include "json.hpp"
#include <fstream>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <regex>
#ifdef _WIN32
#include <dwmapi.h>
#endif

using json = nlohmann::json;

const double PI = 3.141592653589793238463;

void SetupPlot(QCustomPlot* plot)
{
	QColor textColor(220, 220, 220);
	QColor backgroundColor(40, 40, 40);
	QColor gridColor(80, 80, 80);
    QPen axisPen(textColor);
    QPen gridPen(QColor(80, 80, 80));

    plot->setBackground(QBrush(backgroundColor));

    plot->xAxis->setBasePen(axisPen);
    plot->yAxis->setBasePen(axisPen);
    plot->xAxis->setTickPen(axisPen);
    plot->yAxis->setTickPen(axisPen);
    plot->xAxis->setSubTickPen(axisPen);
    plot->yAxis->setSubTickPen(axisPen);
    plot->xAxis->setTickLabelColor(textColor);
    plot->yAxis->setTickLabelColor(textColor);
    plot->xAxis->setLabelColor(textColor);
    plot->yAxis->setLabelColor(textColor);

    plot->replot();
}

std::vector<PropData>& RotateProps(std::vector<PropData>& props, double rotationalOffset)
{
	double rotOffsetRad = qDegreesToRadians(rotationalOffset);
    for (auto& prop : props)
    {
        double x = prop.posX;
        double y = prop.posY;
        prop.posX = x * cos(rotOffsetRad) - y * sin(rotOffsetRad);
        prop.posY = x * sin(rotOffsetRad) + y * cos(rotOffsetRad);
    }
	return props;
}

std::vector<int> ParseCsvInt(const QString& str)
{
    QStringList parts = str.split(',');
	std::vector<int> output;
    for (const QString& part : parts)
    {
        bool ok;
        int value = part.trimmed().toInt(&ok);
        if (ok) output.push_back(value);
    }
	return output;
}

std::vector<std::string> ParseCsvString(const QString& str)
{
    QStringList parts = str.split(',');
    std::vector<std::string> output;
    for (const QString& part : parts)
    {
        std::string value = part.trimmed().toStdString();
        if (!value.empty()) {
            output.push_back(value);
        }
    }
    return output;
}

template<typename T>
void removeItems(std::vector<T>& main_vector, const std::vector<T>& items_to_remove)
{
    main_vector.erase(
        std::remove_if(
            main_vector.begin(),
            main_vector.end(),
            [&](const T& items_from_main)
            {
                return std::find(items_to_remove.begin(), items_to_remove.end(), items_from_main) != items_to_remove.end();
            }
        ),
        main_vector.end()
    );
}

bool IsInSourceQuadrant(const PropData& prop, int sourceQuadrant)
{
    switch (sourceQuadrant)
    {
        case 1: // Quadrant 1: +x, +y
            return prop.posX > 0 && prop.posY > 0;
        case 2: // Quadrant 2: +x, -y
            return prop.posX > 0 && prop.posY < 0;
        case 3: // Quadrant 3: -x, -y
            return prop.posX < 0 && prop.posY < 0;
        case 4: // Quadrant 4: -x, +y
            return prop.posX < 0 && prop.posY > 0;
        default:
            return false; // Invalid quadrant
	}
}

PropData MirrorPropToQuadrant(const PropData& prop, int sourceQuadrant, int destinationQuadrant)
{
    PropData newProp = prop;
	int s = sourceQuadrant;
	int d = destinationQuadrant;
    switch (s)
    {
        case 1:
			// already prepared in the +x +y quadrant
            break;
		case 2: // +x-y to +x+y
            newProp.posY = -prop.posY;

			newProp.rotX = -prop.rotX;
			newProp.rotZ = -prop.rotZ;
            break;
		case 3: // -x-y to +x+y
            newProp.posX = -prop.posX;
            newProp.posY = -prop.posY;

			newProp.rotZ = prop.rotZ - 180;
			break;
        case 4: // -x+y to +x+y
            newProp.posX = -prop.posX;

			newProp.rotX = -prop.rotX;
			newProp.rotZ = -prop.rotZ + 180;
			break;
    }
    // we basically converted the prop temporarily to the +x +y quadrant
	switch (d) // now its easier to convert it to the destination quadrant
    {
        case 1:
			// nothing changes
			break;
        case 2:
			newProp.posY = -newProp.posY;

			newProp.rotX = -newProp.rotX;
			newProp.rotZ = -newProp.rotZ;
			break;
        case 3:
            newProp.posX = -newProp.posX;
			newProp.posY = -newProp.posY;

			newProp.rotZ = newProp.rotZ - 180;
            break;
		case 4:
            newProp.posX = -newProp.posX;

			newProp.rotX = -newProp.rotX;
			newProp.rotZ = -newProp.rotZ + 180;
            break;
    }
	return newProp;
}

std::string wildcardToRegex(const std::string& wildcard)
{
    std::string regexStr;

    regexStr.reserve(wildcard.length() * 2);

    for (const char c : wildcard)
    {
        switch (c)
        {
            case '*':
                regexStr += ".*";
                break;
            // Escape all special regex characters to treat them as literals
            case '.': case '\\': case '+': case '?': case '[':
            case '^': case ']': case '$': case '(': case ')':
            case '{': case '}': case '=': case '!': case '<':
            case '>': case '|': case ':':
                regexStr += '\\';
                regexStr += c;
                break;
            default:
                regexStr += c;
                break;
        }
    }
    return regexStr;
}

std::vector<PropData> filterPropsByName(const std::vector<PropData>& allProps, const std::string& nameFilter)
{
    if (nameFilter.empty()) return {};
    if (nameFilter == "*") return allProps;

    std::vector<PropData> filteredProps;
    std::string regexPattern = wildcardToRegex(nameFilter);

    try
    {
        std::regex nameRegex(regexPattern, std::regex_constants::icase);

        for (const PropData& prop : allProps)
        {
            if (std::regex_match(prop.name.toStdString(), nameRegex))
            {
                filteredProps.push_back(prop);
            }
        }
    }
    catch (const std::regex_error& e)
    {
        qDebug() << "Regex error while filtering by name: " << e.what();
    }
    return filteredProps;
}

std::vector<PropData> filterPropsByDecal(const std::vector<PropData>& allProps, const int& decalFilter)
{
    if (decalFilter < 0) return allProps;
    std::vector<PropData> filteredProps;
    for (const PropData& prop : allProps)
    {
        if (prop.decals == decalFilter) filteredProps.push_back(prop);
    }
    return filteredProps;
}

EasyObjects::EasyObjects(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    for (QLineEdit* edit : this->findChildren<QLineEdit*>()) {
        connect(edit, &QLineEdit::textChanged, this, &EasyObjects::updateAndRedraw);
    }

    QCustomPlot* plot = ui.ObjectPlot;
	SetupPlot(plot); // initialize plot and set its theme.

#ifdef _WIN32
    HWND hwnd = (HWND)this->winId();
    const DWMWINDOWATTRIBUTE attribute = DWMWA_USE_IMMERSIVE_DARK_MODE;
    BOOL useDarkMode = true;
    HRESULT result = DwmSetWindowAttribute(hwnd, attribute, &useDarkMode, sizeof(useDarkMode));
#endif
}

EasyObjects::~EasyObjects()
{}

std::vector<PropData>& LoadPropData(const json& data, std::vector<PropData>& props)
{

    for (const auto& prop : data)
    {
        PropData newProp = {
            QString::fromStdString(prop.value("model", "")),
			prop["rotation"].value("x", 0.0),
			prop["rotation"].value("y", 0.0),
            prop["rotation"].value("z", 0.0),
            prop.value("frozen", -1),
			QString::fromStdString(prop.value("name", "")),
			prop.value("invincible", -1),
            prop.value("visible", -1),
            prop.value("collisions", -1),
            prop.value("class", -1),
            prop.value("lod", -1),
            prop.value("lights", -1),
            prop.value("decals", -1),
            prop.value("alpha", -1),
            prop["coords"].value("x", 0.0),
			prop["coords"].value("y", 0.0),
            prop["coords"].value("z", 0.0),
            prop.value("dynamic", -1),
            prop.value("locked", -1),
			prop.value("gravity", -1)
        };
		props.push_back(newProp);
    }
	return props;
}

void EasyObjects::on_SelectFile_clicked()
{

    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Objects File"), QDir::currentPath(), tr("JSON Files (*.json)"));
    
    // changes the name of the 'SelectFile' button to the file name.extension
	QFileInfo fileInfo(fileName);
	QString justTheFileName = fileInfo.fileName();
    ui.SelectFile->setText(justTheFileName);
	std::ifstream file(fileName.toStdString());
    json data;
    if (file.is_open()) file >> data;
    if (data.is_null())
    {
        std::cout << "JSON data is invalid." << std::endl;
        return;
    }
    m_props.clear();
    m_props = LoadPropData(data, m_props);
	qDebug() << "Loaded " << m_props.size() << " props.";
    updateAndRedraw();
}

void EasyObjects::on_SaveYmap_clicked()
{
	//TODO: Implement saving to YMAP format
}

void EasyObjects::on_SaveJson_clicked()
{
	// add copied props to the main props and save
	std::vector<PropData> allProps = m_props;
	std::vector<PropData> copiedProps = m_props_copied;
    allProps.insert(allProps.end(), copiedProps.begin(), copiedProps.end());
    json outputJson;
    for (const PropData& prop : allProps)
    {
        json propJson;
        propJson["model"] = prop.model.toStdString();
        propJson["rotation"]["x"] = prop.rotX;
        propJson["rotation"]["y"] = prop.rotY;
        propJson["rotation"]["z"] = prop.rotZ;
        propJson["frozen"] = prop.frozen;
        propJson["name"] = prop.name.toStdString();
        propJson["invincible"] = prop.invincible;
        propJson["visible"] = prop.visible;
        propJson["collisions"] = prop.collisions;
        propJson["class"] = prop.classId;
        propJson["lod"] = prop.lod;
        propJson["lights"] = prop.lights;
        propJson["decals"] = prop.decals;
        propJson["alpha"] = prop.alpha;
        propJson["coords"]["x"] = prop.posX;
        propJson["coords"]["y"] = prop.posY;
        propJson["coords"]["z"] = prop.posZ;
        propJson["dynamic"] = prop.dynamic;
        propJson["locked"] = prop.locked;
        propJson["gravity"] = prop.gravity;
        outputJson.push_back(propJson);
    }
    QString saveFileName = QFileDialog::getSaveFileName(this, tr("Save JSON File"), QDir::currentPath(), tr("JSON Files (*.json)"));
    if (!saveFileName.isEmpty())
    {
        std::ofstream outFile(saveFileName.toStdString());
        outFile << std::setw(4) << outputJson << std::endl; // pretty print with 4 spaces
        qDebug() << "Saved JSON to " << saveFileName;
	}
}

void EasyObjects::plotData()
{
    double rotationalOffset = (ui.RotationalOffset->text()).toDouble();
    double rotOffsetRadians = qDegreesToRadians(rotationalOffset);


    QVector<double> props_x;// original json props
    QVector<double> props_y;
	QVector<double> props_source_x;// source quadrant props
    QVector<double> props_source_y;
	QVector<double> props_copied_x;// new copied props
	QVector<double> props_copied_y;
    for (const PropData& prop : m_props)
    {
		props_x.push_back(prop.posX);
		props_y.push_back(prop.posY);
	}

    for (const PropData& prop : m_props_source)
    {
        props_source_x.push_back(prop.posX);
        props_source_y.push_back(prop.posY);
	}
    for (const PropData& prop : m_props_copied)
    {
        props_copied_x.push_back(prop.posX);
        props_copied_y.push_back(prop.posY);
    }

    // now we gotta plot it to the object widge called 'ObjectPlot', using QCustomPlot
    QCustomPlot* plot = ui.ObjectPlot;

    plot->clearGraphs();
    plot->clearItems();
    plot->clearPlottables();

    QCPGraph* mainGraph = plot->addGraph();
    QCPGraph* sourceGraph = plot->addGraph();
	QCPGraph* copiedGraph = plot->addGraph();

    mainGraph->setData(props_x, props_y);
    sourceGraph->setData(props_source_x, props_source_y);
    copiedGraph->setData(props_copied_x, props_copied_y);

    mainGraph->setLineStyle(QCPGraph::lsNone);
    sourceGraph->setLineStyle(QCPGraph::lsNone);
    copiedGraph->setLineStyle(QCPGraph::lsNone);

    mainGraph->setScatterStyle(QCPScatterStyle::ssDisc);
    sourceGraph->setScatterStyle(QCPScatterStyle::ssDisc);
    copiedGraph->setScatterStyle(QCPScatterStyle::ssDisc);

    mainGraph->setPen(QPen(Qt::GlobalColor::darkGray));
    sourceGraph->setPen(QPen(Qt::GlobalColor::cyan));
    copiedGraph->setPen(QPen(Qt::GlobalColor::green));

    std::vector<PropData> m_props_highlight = m_props_source;
    m_props_highlight.insert(m_props_highlight.end(), m_props_copied.begin(), m_props_copied.end());

    // adds 'local' prop axis lines so you see which way it is facing but app responds slowly
    //for (const PropData& prop : m_props_highlight)
    //{
    //    QCPItemLine* xAxisLine = new QCPItemLine(plot);
    //    QCPItemLine* yAxisLine = new QCPItemLine(plot);
    //    double xRad = qDegreesToRadians(prop.rotZ + rotationalOffset);
    //    double yRad = xRad + (PI / 2.0);

    //    xAxisLine->start->setCoords(prop.posX, prop.posY);
    //    xAxisLine->end->setCoords(prop.posX + 5.0 * cos(xRad), prop.posY + 5.0 * sin(xRad));

    //    yAxisLine->start->setCoords(prop.posX, prop.posY);
    //    yAxisLine->end->setCoords(prop.posX + 5.0 * cos(yRad), prop.posY + 5.0 * sin(yRad));

    //    xAxisLine->setPen(QPen(Qt::GlobalColor::red, 1.5));
    //    yAxisLine->setPen(QPen(Qt::GlobalColor::green, 1.5));
    //}

    QCPItemLine* xAxisLine = new QCPItemLine(plot);
    QCPItemLine* yAxisLine = new QCPItemLine(plot);

    xAxisLine->setPen(QPen(Qt::darkRed, 1, Qt::DashLine));
    yAxisLine->setPen(QPen(Qt::darkGreen, 1, Qt::DashLine));

    xAxisLine->start->setCoords(-500 * cos(rotOffsetRadians), -500 * sin(rotOffsetRadians));
    xAxisLine->end->setCoords(500 * cos(rotOffsetRadians), 500 * sin(rotOffsetRadians));
    yAxisLine->start->setCoords(-500 * cos(rotOffsetRadians + (PI / 2)), -500 * sin(rotOffsetRadians + (PI / 2)));
    yAxisLine->end->setCoords(500 * cos(rotOffsetRadians + (PI / 2)), 500 * sin(rotOffsetRadians + (PI / 2)));

    double q1_angle_rad = rotOffsetRadians + (PI / 4);
    double q2_angle_rad = rotOffsetRadians - (PI / 4);
    double q3_angle_rad = rotOffsetRadians - 3 * (PI / 4);
    double q4_angle_rad = rotOffsetRadians + 3 * (PI / 4);
    double label_distance = 250;

    QCPItemText* q1_label = new QCPItemText(plot);
    q1_label->position->setCoords((label_distance)* cos(q1_angle_rad), label_distance* sin(q1_angle_rad));
    q1_label->setText("1");
    q1_label->setFont(QFont("sans serif", 16, QFont::Bold));
    q1_label->setColor(Qt::white);

    QCPItemText* q2_label = new QCPItemText(plot);
    q2_label->position->setCoords((label_distance)*cos(q2_angle_rad), label_distance * sin(q2_angle_rad));
    q2_label->setText("2");
    q2_label->setFont(QFont("sans serif", 16, QFont::Bold));
    q2_label->setColor(Qt::white);

    QCPItemText* q3_label = new QCPItemText(plot);
    q3_label->position->setCoords((label_distance)*cos(q3_angle_rad), label_distance * sin(q3_angle_rad));
    q3_label->setText("3");
    q3_label->setFont(QFont("sans serif", 16, QFont::Bold));
    q3_label->setColor(Qt::white);

    QCPItemText* q4_label = new QCPItemText(plot);
    q4_label->position->setCoords((label_distance)*cos(q4_angle_rad), label_distance * sin(q4_angle_rad));
    q4_label->setText("4");
    q4_label->setFont(QFont("sans serif", 16, QFont::Bold));
    q4_label->setColor(Qt::white);

    QVector<double> all_x = props_x + props_copied_x;
    QVector<double> all_y = props_y + props_copied_y;

    double max_abs_x = 0.0, max_abs_y = 0.0;
	for (double x : all_x) max_abs_x = (std::max)(max_abs_x, std::abs(x));
    for (double y : all_y) max_abs_y = (std::max)(max_abs_y, std::abs(y));

    double max_extent = (std::max)(max_abs_x, max_abs_y);
    max_extent = (std::max)(max_extent, 250.0);

    plot->xAxis->setRange(-max_extent, max_extent);
    plot->yAxis->setRange(-max_extent, max_extent);

    plot->replot();
}

std::pair<std::vector<PropData>, std::vector<PropData>> EasyObjects::createMirroredQuadrantData(std::vector<PropData>& props)
{
    int sourceQuadrant;
	std::vector<int> destinationQuadrants;
	double rotationalOffset;
	std::vector<PropData> props_source;
	std::vector<PropData> props_copied;

    sourceQuadrant = ui.SourceQuadrant->text().toInt();
    destinationQuadrants = ParseCsvInt(ui.DestinationQuadrants->text());
	rotationalOffset = ui.RotationalOffset->text().toDouble();

    // first doing a negative of rotational offset
    // for simpler source quadrant filtering of props
    std::vector<PropData> props_rotated = props;
	props_rotated = RotateProps(props_rotated, -rotationalOffset);

    for (const PropData& prop : props_rotated)
    {
        if (prop.classId == 2 && IsInSourceQuadrant(prop, sourceQuadrant))
        {
			props_source.push_back(prop);
            for (int destinationQuadrant : destinationQuadrants)
            {
                if (destinationQuadrant == sourceQuadrant) continue; // skip if same quadrant
                PropData newProp = prop;
                newProp = MirrorPropToQuadrant(newProp, sourceQuadrant, destinationQuadrant);
                props_copied.push_back(newProp);
            }
        }
    }



	// now we can reapply the rotational offset to the filtered props
	props_source = RotateProps(props_source, rotationalOffset);
	props_copied = RotateProps(props_copied, rotationalOffset);

    return { props_source, props_copied };

}

std::vector<PropData> EasyObjects::createMirroredAxisData(std::vector<PropData>& props)
{
    return std::vector<PropData>(), std::vector<PropData>();
}

std::vector<PropData> EasyObjects::createSpinRotateData(std::vector<PropData>& props)
{
    return std::vector<PropData>(), std::vector<PropData>();
}

void EasyObjects::updateAndRedraw()
{
    if (m_props.empty()) return;

    std::string nameFilter = ui.ObjectNameRegex->text().toStdString();
    std::vector<std::string> nameFilterIgnore = ParseCsvString(ui.ObjectNamesIgnore->text());
    std::vector<int> decalFilterIgnore = ParseCsvInt(ui.ObjectDecalsIgnore->text());

    std::vector<std::string> objectDecalSwaps = ParseCsvString(ui.ObjectDecalSwaps->text());

    std::vector<PropData> propsToProcess;
    if (!nameFilter.empty())
    {
        propsToProcess = filterPropsByName(m_props, nameFilter);
    }
    else
    {
        propsToProcess = m_props;
    }

    if (!nameFilterIgnore.empty())
    {
        for (std::string filter : nameFilterIgnore)
        {
            std::vector<PropData> propsToFilterOut = filterPropsByName(propsToProcess, filter);
            removeItems(propsToProcess, propsToFilterOut);
        }
    }

    if (!decalFilterIgnore.empty())
    {
        for (int filter : decalFilterIgnore)
        {
            std::vector<PropData> propsToFilterOut = filterPropsByDecal(propsToProcess, filter);
            removeItems(propsToProcess, propsToFilterOut);
        }
    }

    int currentMode = ui.ObjectCopyMode->currentIndex();

    m_props_source.clear();
    m_props_copied.clear();

    switch (currentMode)
    {
        case 0: //Mirror Quadrant
            {
                auto result = createMirroredQuadrantData(propsToProcess);
                m_props_source = result.first;
                m_props_copied = result.second;
                break;
            }
        case 1: //Mirror Axes
            m_props_source, m_props_copied = createMirroredAxisData(propsToProcess);
            break;
        case 2: //Spin Rotate
            m_props_source, m_props_copied = createSpinRotateData(propsToProcess);
            break;
    }
    // need to apply decal swaps to m_props_copied
    for (PropData& prop : m_props_copied)
    {
        for (const std::string& swap : objectDecalSwaps)
        {
            // each string is like "number1-number2" we swap 1 to 2
			std::regex swapRegex("(\\d+)-(\\d+)");
            std::smatch match;
            if (std::regex_search(swap, match, swapRegex) && match.size() == 3)
            {
                int fromDecal = std::stoi(match[1].str());
                int toDecal = std::stoi(match[2].str());
                if (prop.decals == fromDecal)
                {
                    prop.decals = toDecal;
					qDebug() << "Swapped decal from " << fromDecal << " to " << toDecal << " for prop: " << prop.name;
                }
			}
		}
    }
    plotData();
}