/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *AEDBox;
    QPushButton *shockButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *powerButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *batteryLabel;
    QGroupBox *AEDDisplay;
    QLabel *AEDDisplayLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *shaveButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *CPRGoodButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *attachPadsButton;
    QSpacerItem *verticalSpacer;
    QPushButton *detachPadsButton;
    QPushButton *CPRHardButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *CPRLightButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cprButton;
    QLabel *ECGLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1062, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        AEDBox = new QGroupBox(centralwidget);
        AEDBox->setObjectName(QString::fromUtf8("AEDBox"));
        AEDBox->setGeometry(QRect(40, 50, 501, 391));
        AEDBox->setStyleSheet(QString::fromUtf8("background-color: rgb(87, 227, 137);"));
        shockButton = new QPushButton(AEDBox);
        shockButton->setObjectName(QString::fromUtf8("shockButton"));
        shockButton->setGeometry(QRect(210, 310, 83, 30));
        shockButton->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 132, 228);"));
        horizontalLayoutWidget = new QWidget(AEDBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 50, 451, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        powerButton = new QPushButton(horizontalLayoutWidget);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 27, 36);"));

        horizontalLayout->addWidget(powerButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        batteryLabel = new QLabel(horizontalLayoutWidget);
        batteryLabel->setObjectName(QString::fromUtf8("batteryLabel"));

        horizontalLayout->addWidget(batteryLabel);

        AEDDisplay = new QGroupBox(AEDBox);
        AEDDisplay->setObjectName(QString::fromUtf8("AEDDisplay"));
        AEDDisplay->setGeometry(QRect(110, 180, 281, 80));
        AEDDisplay->setAlignment(Qt::AlignCenter);
        AEDDisplayLabel = new QLabel(AEDDisplay);
        AEDDisplayLabel->setObjectName(QString::fromUtf8("AEDDisplayLabel"));
        AEDDisplayLabel->setGeometry(QRect(10, 30, 261, 41));
        AEDDisplayLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(660, 170, 341, 311));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 1, 1, 1);

        shaveButton = new QPushButton(gridLayoutWidget);
        shaveButton->setObjectName(QString::fromUtf8("shaveButton"));
        shaveButton->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 171, 143);"));

        gridLayout_2->addWidget(shaveButton, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        CPRGoodButton = new QPushButton(gridLayoutWidget);
        CPRGoodButton->setObjectName(QString::fromUtf8("CPRGoodButton"));

        gridLayout_2->addWidget(CPRGoodButton, 7, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 8, 3, 1, 1);

        attachPadsButton = new QPushButton(gridLayoutWidget);
        attachPadsButton->setObjectName(QString::fromUtf8("attachPadsButton"));
        attachPadsButton->setStyleSheet(QString::fromUtf8("background-color: rgb(143, 240, 164);"));

        gridLayout_2->addWidget(attachPadsButton, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        detachPadsButton = new QPushButton(gridLayoutWidget);
        detachPadsButton->setObjectName(QString::fromUtf8("detachPadsButton"));
        detachPadsButton->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 51, 59);"));

        gridLayout_2->addWidget(detachPadsButton, 0, 3, 1, 1);

        CPRHardButton = new QPushButton(gridLayoutWidget);
        CPRHardButton->setObjectName(QString::fromUtf8("CPRHardButton"));

        gridLayout_2->addWidget(CPRHardButton, 9, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 6, 3, 1, 1);

        CPRLightButton = new QPushButton(gridLayoutWidget);
        CPRLightButton->setObjectName(QString::fromUtf8("CPRLightButton"));

        gridLayout_2->addWidget(CPRLightButton, 5, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 7, 2, 1, 1);

        cprButton = new QPushButton(gridLayoutWidget);
        cprButton->setObjectName(QString::fromUtf8("cprButton"));
        cprButton->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 138, 221);"));

        gridLayout_2->addWidget(cprButton, 7, 1, 1, 1);

        ECGLabel = new QLabel(centralwidget);
        ECGLabel->setObjectName(QString::fromUtf8("ECGLabel"));
        ECGLabel->setGeometry(QRect(620, 40, 381, 91));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1062, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AEDBox->setTitle(QCoreApplication::translate("MainWindow", "AED Plus", nullptr));
        shockButton->setText(QCoreApplication::translate("MainWindow", "Shock", nullptr));
        powerButton->setText(QCoreApplication::translate("MainWindow", "Power On", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Battery:", nullptr));
        batteryLabel->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        AEDDisplay->setTitle(QCoreApplication::translate("MainWindow", "Display", nullptr));
        AEDDisplayLabel->setText(QCoreApplication::translate("MainWindow", "AED PLUS", nullptr));
        shaveButton->setText(QCoreApplication::translate("MainWindow", "Shave", nullptr));
        CPRGoodButton->setText(QCoreApplication::translate("MainWindow", "Perfect Depth", nullptr));
        attachPadsButton->setText(QCoreApplication::translate("MainWindow", "Attach Pads", nullptr));
        detachPadsButton->setText(QCoreApplication::translate("MainWindow", "Detach pads", nullptr));
        CPRHardButton->setText(QCoreApplication::translate("MainWindow", "Too Hard", nullptr));
        CPRLightButton->setText(QCoreApplication::translate("MainWindow", "Too light", nullptr));
        cprButton->setText(QCoreApplication::translate("MainWindow", "Perform CPR", nullptr));
        ECGLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
