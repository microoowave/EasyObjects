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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
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
    QComboBox *ObjectCopyType;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *RotationalOffsetLabel;
    QLineEdit *RotationalOffset;
    QLabel *SourceQuadrantLabel;
    QLineEdit *SourceQuadrant;
    QLabel *DestinationQuadrantsLabel;
    QLineEdit *DestinationQuadrants;
    QLabel *ObjectExtraRotationLabel;
    QLineEdit *ObjectExtraRotation;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *ObjectDecalSwapsLabel;
    QPlainTextEdit *ObjectDecalSwaps;
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
        ObjectCopyType = new QComboBox(horizontalLayoutWidget);
        ObjectCopyType->addItem(QString());
        ObjectCopyType->addItem(QString());
        ObjectCopyType->addItem(QString());
        ObjectCopyType->addItem(QString());
        ObjectCopyType->setObjectName("ObjectCopyType");

        horizontalLayout->addWidget(ObjectCopyType);

        formLayoutWidget_3 = new QWidget(centralWidget);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(10, 230, 291, 124));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::AllNonFixedFieldsGrow);
        formLayout_3->setHorizontalSpacing(6);
        formLayout_3->setVerticalSpacing(6);
        formLayout_3->setContentsMargins(5, 5, 5, 5);
        RotationalOffsetLabel = new QLabel(formLayoutWidget_3);
        RotationalOffsetLabel->setObjectName("RotationalOffsetLabel");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, RotationalOffsetLabel);

        RotationalOffset = new QLineEdit(formLayoutWidget_3);
        RotationalOffset->setObjectName("RotationalOffset");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, RotationalOffset);

        SourceQuadrantLabel = new QLabel(formLayoutWidget_3);
        SourceQuadrantLabel->setObjectName("SourceQuadrantLabel");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, SourceQuadrantLabel);

        SourceQuadrant = new QLineEdit(formLayoutWidget_3);
        SourceQuadrant->setObjectName("SourceQuadrant");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::FieldRole, SourceQuadrant);

        DestinationQuadrantsLabel = new QLabel(formLayoutWidget_3);
        DestinationQuadrantsLabel->setObjectName("DestinationQuadrantsLabel");

        formLayout_3->setWidget(3, QFormLayout::ItemRole::LabelRole, DestinationQuadrantsLabel);

        DestinationQuadrants = new QLineEdit(formLayoutWidget_3);
        DestinationQuadrants->setObjectName("DestinationQuadrants");

        formLayout_3->setWidget(3, QFormLayout::ItemRole::FieldRole, DestinationQuadrants);

        ObjectExtraRotationLabel = new QLabel(formLayoutWidget_3);
        ObjectExtraRotationLabel->setObjectName("ObjectExtraRotationLabel");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, ObjectExtraRotationLabel);

        ObjectExtraRotation = new QLineEdit(formLayoutWidget_3);
        ObjectExtraRotation->setObjectName("ObjectExtraRotation");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::FieldRole, ObjectExtraRotation);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 359, 291, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        ObjectDecalSwapsLabel = new QLabel(verticalLayoutWidget);
        ObjectDecalSwapsLabel->setObjectName("ObjectDecalSwapsLabel");

        verticalLayout->addWidget(ObjectDecalSwapsLabel);

        ObjectDecalSwaps = new QPlainTextEdit(verticalLayoutWidget);
        ObjectDecalSwaps->setObjectName("ObjectDecalSwaps");

        verticalLayout->addWidget(ObjectDecalSwaps);

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

        QMetaObject::connectSlotsByName(EasyObjectsClass);
    } // setupUi

    void retranslateUi(QMainWindow *EasyObjectsClass)
    {
        EasyObjectsClass->setWindowTitle(QCoreApplication::translate("EasyObjectsClass", "EasyObjects", nullptr));
#if QT_CONFIG(tooltip)
        EasyObjectsClass->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ObjectNameRegex->setText(QCoreApplication::translate("EasyObjectsClass", "prop_micro_led_\\d+", nullptr));
        ObjectNameRegexLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Object Name Regex:", nullptr));
        ObjectNamesIgnoreLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Object Names Ingore:", nullptr));
#if QT_CONFIG(tooltip)
        ObjectNamesIgnore->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        ObjectNamesIgnore->setText(QCoreApplication::translate("EasyObjectsClass", "object1, object2", nullptr));
        ObjectDecalsIgnoreLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Object Decals Ignore:", nullptr));
#if QT_CONFIG(whatsthis)
        ObjectDecalsIgnore->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        ObjectDecalsIgnore->setText(QCoreApplication::translate("EasyObjectsClass", "5, 12, 7", nullptr));
        ObjectCopyType->setItemText(0, QCoreApplication::translate("EasyObjectsClass", "Mirror by Quadrant", nullptr));
        ObjectCopyType->setItemText(1, QCoreApplication::translate("EasyObjectsClass", "Mirror by Axes", nullptr));
        ObjectCopyType->setItemText(2, QCoreApplication::translate("EasyObjectsClass", "Rotate by Quadrant", nullptr));
        ObjectCopyType->setItemText(3, QCoreApplication::translate("EasyObjectsClass", "Rotate by Axes", nullptr));

        RotationalOffsetLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Rotational Offset (\302\260):", nullptr));
        RotationalOffset->setText(QCoreApplication::translate("EasyObjectsClass", "-45", nullptr));
        SourceQuadrantLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Source Quadrant:", nullptr));
        SourceQuadrant->setText(QCoreApplication::translate("EasyObjectsClass", "1", nullptr));
        DestinationQuadrantsLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Destination Quadrants:", nullptr));
#if QT_CONFIG(tooltip)
        DestinationQuadrants->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        DestinationQuadrants->setText(QCoreApplication::translate("EasyObjectsClass", "4, 2", nullptr));
        ObjectExtraRotationLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Object Extra Rotation (\302\260):", nullptr));
        ObjectExtraRotation->setText(QCoreApplication::translate("EasyObjectsClass", "0", nullptr));
        ObjectDecalSwapsLabel->setText(QCoreApplication::translate("EasyObjectsClass", "Object Decal Swaps:", nullptr));
        ObjectDecalSwaps->setPlainText(QCoreApplication::translate("EasyObjectsClass", "Input,Output\n"
"27,15\n"
"0,7", nullptr));
        label_7->setText(QCoreApplication::translate("EasyObjectsClass", "Input File:", nullptr));
        label_8->setText(QCoreApplication::translate("EasyObjectsClass", "Save Output:", nullptr));
        SaveYmap->setText(QCoreApplication::translate("EasyObjectsClass", "YMAP", nullptr));
        SaveJson->setText(QCoreApplication::translate("EasyObjectsClass", "JSON", nullptr));
        SelectFile->setText(QCoreApplication::translate("EasyObjectsClass", "Select File", nullptr));
        menuThis_is_like_a_uhhhh_app_or_something_ye->setTitle(QCoreApplication::translate("EasyObjectsClass", "This is like a uhhhh app or something ye", nullptr));
        menuand_this_is_some_more_text_as_well->setTitle(QCoreApplication::translate("EasyObjectsClass", "and this is some more text as well", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EasyObjectsClass: public Ui_EasyObjectsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EASYOBJECTS_H
