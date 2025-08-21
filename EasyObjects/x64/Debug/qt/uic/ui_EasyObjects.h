/********************************************************************************
** Form generated from reading UI file 'EasyObjects.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EASYOBJECTS_H
#define UI_EASYOBJECTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_EasyObjectsClass
{
public:
    QWidget *centralWidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *ObjectNameRegex;
    QLabel *ObjectNameRegexLabel;
    QLabel *ObjectNamesIgnoreLabel;
    QLineEdit *ObjectNamesIgnore;
    QLabel *ObjectDecalsIgnoreLabel;
    QLineEdit *ObjectDecalsIgnore;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *ObjectCopyMode;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *SaveYmap;
    QPushButton *SaveJson;
    QPushButton *SelectFile;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *ObjectPlot;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLineEdit *SourceQuadrant;
    QLabel *SourceQuadrantLabel;
    QLabel *DestinationQuadrantsLabel;
    QLineEdit *DestinationQuadrants;
    QLabel *RotationalOffsetLabel;
    QLineEdit *RotationalOffset;
    QWidget *page_2;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLineEdit *MirrorLineAngle;
    QLabel *MirrorLineAngleLabel;
    QLabel *SourceSegmentAngleLabel;
    QLineEdit *SourceSegmentAngle;
    QLabel *SourceSegmentSizeLabel;
    QLineEdit *SourceSegmentSize;
    QWidget *page_3;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label;
    QLabel *DestinationQuadrantsLabel_3;
    QLineEdit *DestinationQuadrants_3;
    QLabel *RotationalOffsetLabel_3;
    QLineEdit *RotationalOffset_3;
    QLineEdit *DestinationQuadrants_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *ObjectDecalSwapsLabel;
    QLineEdit *ObjectDecalSwaps;
    QMenuBar *menuBar;
    QMenu *menuThis_is_like_a_uhhhh_app_or_something_ye;
    QMenu *menuand_this_is_some_more_text_as_well;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EasyObjectsClass)
    {
        if (EasyObjectsClass->objectName().isEmpty())
            EasyObjectsClass->setObjectName("EasyObjectsClass");
        EasyObjectsClass->resize(998, 597);
        EasyObjectsClass->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        EasyObjectsClass->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(EasyObjectsClass);
        centralWidget->setObjectName("centralWidget");
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 80, 291, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(5, 5, 5, 5);
        ObjectNameRegex = new QLineEdit(formLayoutWidget);
        ObjectNameRegex->setObjectName("ObjectNameRegex");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, ObjectNameRegex);

        ObjectNameRegexLabel = new QLabel(formLayoutWidget);
        ObjectNameRegexLabel->setObjectName("ObjectNameRegexLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, ObjectNameRegexLabel);

        ObjectNamesIgnoreLabel = new QLabel(formLayoutWidget);
        ObjectNamesIgnoreLabel->setObjectName("ObjectNamesIgnoreLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, ObjectNamesIgnoreLabel);

        ObjectNamesIgnore = new QLineEdit(formLayoutWidget);
        ObjectNamesIgnore->setObjectName("ObjectNamesIgnore");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, ObjectNamesIgnore);

        ObjectDecalsIgnoreLabel = new QLabel(formLayoutWidget);
        ObjectDecalsIgnoreLabel->setObjectName("ObjectDecalsIgnoreLabel");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, ObjectDecalsIgnoreLabel);

        ObjectDecalsIgnore = new QLineEdit(formLayoutWidget);
        ObjectDecalsIgnore->setObjectName("ObjectDecalsIgnore");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, ObjectDecalsIgnore);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 190, 291, 34));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        ObjectCopyMode = new QComboBox(horizontalLayoutWidget);
        ObjectCopyMode->addItem(QString());
        ObjectCopyMode->addItem(QString());
        ObjectCopyMode->addItem(QString());
        ObjectCopyMode->setObjectName("ObjectCopyMode");

        horizontalLayout->addWidget(ObjectCopyMode);

        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(9, 10, 291, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        SaveYmap = new QPushButton(gridLayoutWidget);
        SaveYmap->setObjectName("SaveYmap");

        gridLayout->addWidget(SaveYmap, 1, 1, 1, 1);

        SaveJson = new QPushButton(gridLayoutWidget);
        SaveJson->setObjectName("SaveJson");

        gridLayout->addWidget(SaveJson, 1, 2, 1, 1);

        SelectFile = new QPushButton(gridLayoutWidget);
        SelectFile->setObjectName("SelectFile");
        SelectFile->setAutoFillBackground(false);

        gridLayout->addWidget(SelectFile, 0, 1, 1, 2);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(309, 9, 561, 531));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ObjectPlot = new QCustomPlot(verticalLayoutWidget_2);
        ObjectPlot->setObjectName("ObjectPlot");

        verticalLayout_2->addWidget(ObjectPlot);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 230, 291, 151));
        page = new QWidget();
        page->setObjectName("page");
        formLayoutWidget_2 = new QWidget(page);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(0, 0, 291, 151));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        SourceQuadrant = new QLineEdit(formLayoutWidget_2);
        SourceQuadrant->setObjectName("SourceQuadrant");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, SourceQuadrant);

        SourceQuadrantLabel = new QLabel(formLayoutWidget_2);
        SourceQuadrantLabel->setObjectName("SourceQuadrantLabel");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, SourceQuadrantLabel);

        DestinationQuadrantsLabel = new QLabel(formLayoutWidget_2);
        DestinationQuadrantsLabel->setObjectName("DestinationQuadrantsLabel");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, DestinationQuadrantsLabel);

        DestinationQuadrants = new QLineEdit(formLayoutWidget_2);
        DestinationQuadrants->setObjectName("DestinationQuadrants");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, DestinationQuadrants);

        RotationalOffsetLabel = new QLabel(formLayoutWidget_2);
        RotationalOffsetLabel->setObjectName("RotationalOffsetLabel");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, RotationalOffsetLabel);

        RotationalOffset = new QLineEdit(formLayoutWidget_2);
        RotationalOffset->setObjectName("RotationalOffset");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, RotationalOffset);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        formLayoutWidget_3 = new QWidget(page_2);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(0, 0, 291, 151));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        MirrorLineAngle = new QLineEdit(formLayoutWidget_3);
        MirrorLineAngle->setObjectName("MirrorLineAngle");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, MirrorLineAngle);

        MirrorLineAngleLabel = new QLabel(formLayoutWidget_3);
        MirrorLineAngleLabel->setObjectName("MirrorLineAngleLabel");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, MirrorLineAngleLabel);

        SourceSegmentAngleLabel = new QLabel(formLayoutWidget_3);
        SourceSegmentAngleLabel->setObjectName("SourceSegmentAngleLabel");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, SourceSegmentAngleLabel);

        SourceSegmentAngle = new QLineEdit(formLayoutWidget_3);
        SourceSegmentAngle->setObjectName("SourceSegmentAngle");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::FieldRole, SourceSegmentAngle);

        SourceSegmentSizeLabel = new QLabel(formLayoutWidget_3);
        SourceSegmentSizeLabel->setObjectName("SourceSegmentSizeLabel");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, SourceSegmentSizeLabel);

        SourceSegmentSize = new QLineEdit(formLayoutWidget_3);
        SourceSegmentSize->setObjectName("SourceSegmentSize");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::FieldRole, SourceSegmentSize);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        formLayoutWidget_4 = new QWidget(page_3);
        formLayoutWidget_4->setObjectName("formLayoutWidget_4");
        formLayoutWidget_4->setGeometry(QRect(0, 0, 291, 151));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget_4);
        label->setObjectName("label");

        formLayout_4->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        DestinationQuadrantsLabel_3 = new QLabel(formLayoutWidget_4);
        DestinationQuadrantsLabel_3->setObjectName("DestinationQuadrantsLabel_3");

        formLayout_4->setWidget(1, QFormLayout::ItemRole::LabelRole, DestinationQuadrantsLabel_3);

        DestinationQuadrants_3 = new QLineEdit(formLayoutWidget_4);
        DestinationQuadrants_3->setObjectName("DestinationQuadrants_3");

        formLayout_4->setWidget(1, QFormLayout::ItemRole::FieldRole, DestinationQuadrants_3);

        RotationalOffsetLabel_3 = new QLabel(formLayoutWidget_4);
        RotationalOffsetLabel_3->setObjectName("RotationalOffsetLabel_3");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::LabelRole, RotationalOffsetLabel_3);

        RotationalOffset_3 = new QLineEdit(formLayoutWidget_4);
        RotationalOffset_3->setObjectName("RotationalOffset_3");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::FieldRole, RotationalOffset_3);

        DestinationQuadrants_4 = new QLineEdit(formLayoutWidget_4);
        DestinationQuadrants_4->setObjectName("DestinationQuadrants_4");

        formLayout_4->setWidget(0, QFormLayout::ItemRole::FieldRole, DestinationQuadrants_4);

        stackedWidget->addWidget(page_3);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 390, 291, 71));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        ObjectDecalSwapsLabel = new QLabel(verticalLayoutWidget);
        ObjectDecalSwapsLabel->setObjectName("ObjectDecalSwapsLabel");

        verticalLayout->addWidget(ObjectDecalSwapsLabel);

        ObjectDecalSwaps = new QLineEdit(verticalLayoutWidget);
        ObjectDecalSwaps->setObjectName("ObjectDecalSwaps");

        verticalLayout->addWidget(ObjectDecalSwaps);

        EasyObjectsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EasyObjectsClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 998, 21));
        menuThis_is_like_a_uhhhh_app_or_something_ye = new QMenu(menuBar);
        menuThis_is_like_a_uhhhh_app_or_something_ye->setObjectName("menuThis_is_like_a_uhhhh_app_or_something_ye");
        menuand_this_is_some_more_text_as_well = new QMenu(menuBar);
        menuand_this_is_some_more_text_as_well->setObjectName("menuand_this_is_some_more_text_as_well");
        EasyObjectsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EasyObjectsClass);
        mainToolBar->setObjectName("mainToolBar");
        EasyObjectsClass->addToolBar(Qt::ToolBarArea::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(EasyObjectsClass);
        statusBar->setObjectName("statusBar");
        EasyObjectsClass->setStatusBar(statusBar);

        menuBar->addAction(menuThis_is_like_a_uhhhh_app_or_something_ye->menuAction());
        menuBar->addAction(menuand_this_is_some_more_text_as_well->menuAction());

        retranslateUi(EasyObjectsClass);
        QObject::connect(ObjectCopyMode, &QComboBox::currentIndexChanged, stackedWidget, &QStackedWidget::setCurrentIndex);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EasyObjectsClass);
    } // setupUi

    void retranslateUi(QMainWindow *EasyObjectsClass)
    {
        EasyObjectsClass->setWindowTitle(QCoreApplication::translate("EasyObjectsClass", "EasyObjects", nullptr));
#if QT_CONFIG(tooltip)
        EasyObjectsClass->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ObjectNameRegex->setText(QString());
        ObjectNameRegex->setPlaceholderText(QCoreApplication::translate("EasyObjectsClass", "single: 'prop_stunt_*'", nullptr));
        ObjectNameRegexLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Object Name Regex:", nullptr));
        ObjectNamesIgnoreLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Object Names Ingore:", nullptr));
#if QT_CONFIG(tooltip)
        ObjectNamesIgnore->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ObjectNamesIgnore->setText(QString());
        ObjectNamesIgnore->setPlaceholderText(QCoreApplication::translate("EasyObjectsClass", "multi: 'prop1, prop2'", nullptr));
        ObjectDecalsIgnoreLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Object Decals Ignore:", nullptr));
#if QT_CONFIG(whatsthis)
        ObjectDecalsIgnore->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        ObjectDecalsIgnore->setText(QString());
        ObjectDecalsIgnore->setPlaceholderText(QCoreApplication::translate("EasyObjectsClass", "multi: '6, 12, 2'", nullptr));
        ObjectCopyMode->setItemText(0, QCoreApplication::translate("EasyObjectsClass", "Mirror Quadrant", nullptr));
        ObjectCopyMode->setItemText(1, QCoreApplication::translate("EasyObjectsClass", "Mirror Axes", nullptr));
        ObjectCopyMode->setItemText(2, QCoreApplication::translate("EasyObjectsClass", "Spin Rotate", nullptr));

        label_7->setText(QCoreApplication::translate("EasyObjectsClass", "Input File:", nullptr));
        label_8->setText(QCoreApplication::translate("EasyObjectsClass", "Save Output:", nullptr));
        SaveYmap->setText(QCoreApplication::translate("EasyObjectsClass", "YMAP", nullptr));
        SaveJson->setText(QCoreApplication::translate("EasyObjectsClass", "JSON", nullptr));
        SelectFile->setText(QCoreApplication::translate("EasyObjectsClass", "Select File", nullptr));
        SourceQuadrant->setText(QString());
        SourceQuadrant->setPlaceholderText(QCoreApplication::translate("EasyObjectsClass", "single: '2'", nullptr));
        SourceQuadrantLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Source Quadrant:", nullptr));
        DestinationQuadrantsLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Destination Quadrants:", nullptr));
#if QT_CONFIG(tooltip)
        DestinationQuadrants->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        DestinationQuadrants->setText(QString());
        DestinationQuadrants->setPlaceholderText(QCoreApplication::translate("EasyObjectsClass", "multi: '1, 3, 4'", nullptr));
        RotationalOffsetLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Rotational Offset (\302\260):", nullptr));
        RotationalOffset->setText(QString());
        RotationalOffset->setPlaceholderText(QCoreApplication::translate("EasyObjectsClass", "single: '-45.0'", nullptr));
        MirrorLineAngle->setText(QString());
        MirrorLineAngle->setPlaceholderText(QCoreApplication::translate("EasyObjectsClass", "single: '0.0'", nullptr));
        MirrorLineAngleLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Mirror Line Angle (\302\260):", nullptr));
        SourceSegmentAngleLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Source Segment Angle (\302\260):", nullptr));
#if QT_CONFIG(tooltip)
        SourceSegmentAngle->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SourceSegmentAngle->setText(QString());
        SourceSegmentAngle->setPlaceholderText(QCoreApplication::translate("EasyObjectsClass", "single: '45.0'", nullptr));
        SourceSegmentSizeLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Source Segment Size (\302\260):", nullptr));
        SourceSegmentSize->setText(QString());
        SourceSegmentSize->setPlaceholderText(QCoreApplication::translate("EasyObjectsClass", "single: '90.0'", nullptr));
        label->setText(QCoreApplication::translate("EasyObjectsClass", "Source Segment Angle (\302\260):", nullptr));
        DestinationQuadrantsLabel_3->setText(QCoreApplication::translate("EasyObjectsClass", "Source Segment Size (\302\260):", nullptr));
#if QT_CONFIG(tooltip)
        DestinationQuadrants_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        DestinationQuadrants_3->setText(QString());
        DestinationQuadrants_3->setPlaceholderText(QCoreApplication::translate("EasyObjectsClass", "single: '90.0'", nullptr));
        RotationalOffsetLabel_3->setText(QCoreApplication::translate("EasyObjectsClass", "Rotational Offset (\302\260):", nullptr));
        RotationalOffset_3->setText(QString());
        RotationalOffset_3->setPlaceholderText(QCoreApplication::translate("EasyObjectsClass", "single: '-45.0'", nullptr));
#if QT_CONFIG(tooltip)
        DestinationQuadrants_4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        DestinationQuadrants_4->setText(QString());
        DestinationQuadrants_4->setPlaceholderText(QCoreApplication::translate("EasyObjectsClass", "single: '45.0'", nullptr));
        ObjectDecalSwapsLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Object Decal Swaps:", nullptr));
        ObjectDecalSwaps->setText(QString());
        ObjectDecalSwaps->setPlaceholderText(QCoreApplication::translate("EasyObjectsClass", "multi: '1-6, 8-9, 12-4'", nullptr));
        menuThis_is_like_a_uhhhh_app_or_something_ye->setTitle(QCoreApplication::translate("EasyObjectsClass", "This is like a uhhhh app or something ye", nullptr));
        menuand_this_is_some_more_text_as_well->setTitle(QCoreApplication::translate("EasyObjectsClass", "and this is some more text as well", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EasyObjectsClass: public Ui_EasyObjectsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EASYOBJECTS_H
