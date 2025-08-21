#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_EasyObjects.h"
#include <vector>

struct PropData
{
    QString model;
    double rotX;
    double rotY;
    double rotZ;
    int frozen;
    QString name;
	int invincible;
	int visible;
    int collisions;
    int classId;
    int lod;
    int lights;
    int decals;
    int alpha;
    double posX;
    double posY;
	double posZ;
    int dynamic;
    int locked;
    int gravity;
};

inline bool operator==(const PropData& lhs, const PropData& rhs) {
    return lhs.model == rhs.model &&
           lhs.rotX == rhs.rotX &&
           lhs.rotY == rhs.rotY &&
           lhs.rotZ == rhs.rotZ &&
           lhs.frozen == rhs.frozen &&
           lhs.name == rhs.name &&
           lhs.invincible == rhs.invincible &&
           lhs.visible == rhs.visible &&
           lhs.collisions == rhs.collisions &&
           lhs.classId == rhs.classId &&
           lhs.lod == rhs.lod &&
           lhs.lights == rhs.lights &&
           lhs.decals == rhs.decals &&
           lhs.alpha == rhs.alpha &&
           lhs.posX == rhs.posX &&
           lhs.posY == rhs.posY &&
           lhs.posZ == rhs.posZ &&
           lhs.dynamic == rhs.dynamic &&
           lhs.locked == rhs.locked &&
           lhs.gravity == rhs.gravity;
}

class EasyObjects : public QMainWindow
{
    Q_OBJECT

public:
    EasyObjects(QWidget *parent = nullptr);
    ~EasyObjects();

private slots:
	void on_SelectFile_clicked();
	void on_SaveYmap_clicked();
	void on_SaveJson_clicked();
    void updateAndRedraw();

private:
    Ui::EasyObjectsClass ui;
    std::vector<PropData> m_props;
    std::vector<PropData> m_props_source;
    std::vector<PropData> m_props_copied;
    void plotData();
    std::pair<std::vector<PropData>, std::vector<PropData>> createMirroredQuadrantData(std::vector<PropData>& props);
    std::vector<PropData> createMirroredAxisData(std::vector<PropData>& originalProps);
    std::vector<PropData> createSpinRotateData(std::vector<PropData>& originalProps);
};

