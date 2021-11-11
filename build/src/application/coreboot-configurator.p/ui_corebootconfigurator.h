/********************************************************************************
** Form generated from reading UI file 'corebootconfigurator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COREBOOTCONFIGURATOR_H
#define UI_COREBOOTCONFIGURATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_coreboot_configurator
{
public:
    QAction *actionInformation;
    QAction *actionAbout;
    QAction *actionAbout_2;
    QAction *actionSave_to_File;
    QAction *actionImport_from_File;
    QAction *actionExit;
    QAction *actionSave_and_Exit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QHBoxLayout *bottomPanelLayout;
    QCheckBox *advancedCheckBox;
    QDialogButtonBox *confirmBox;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;

    void setupUi(QMainWindow *coreboot_configurator)
    {
        if (coreboot_configurator->objectName().isEmpty())
            coreboot_configurator->setObjectName(QString::fromUtf8("coreboot_configurator"));
        coreboot_configurator->resize(585, 390);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(coreboot_configurator->sizePolicy().hasHeightForWidth());
        coreboot_configurator->setSizePolicy(sizePolicy);
        coreboot_configurator->setMinimumSize(QSize(585, 390));
        coreboot_configurator->setMaximumSize(QSize(585, 390));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush4(QColor(246, 245, 244, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        coreboot_configurator->setPalette(palette);
        coreboot_configurator->setFocusPolicy(Qt::NoFocus);
        actionInformation = new QAction(coreboot_configurator);
        actionInformation->setObjectName(QString::fromUtf8("actionInformation"));
        actionAbout = new QAction(coreboot_configurator);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_2 = new QAction(coreboot_configurator);
        actionAbout_2->setObjectName(QString::fromUtf8("actionAbout_2"));
        actionSave_to_File = new QAction(coreboot_configurator);
        actionSave_to_File->setObjectName(QString::fromUtf8("actionSave_to_File"));
        actionImport_from_File = new QAction(coreboot_configurator);
        actionImport_from_File->setObjectName(QString::fromUtf8("actionImport_from_File"));
        actionExit = new QAction(coreboot_configurator);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSave_and_Exit = new QAction(coreboot_configurator);
        actionSave_and_Exit->setObjectName(QString::fromUtf8("actionSave_and_Exit"));
        centralwidget = new QWidget(coreboot_configurator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setAutoFillBackground(false);

        verticalLayout->addWidget(tabWidget);

        bottomPanelLayout = new QHBoxLayout();
        bottomPanelLayout->setObjectName(QString::fromUtf8("bottomPanelLayout"));
        advancedCheckBox = new QCheckBox(centralwidget);
        advancedCheckBox->setObjectName(QString::fromUtf8("advancedCheckBox"));

        bottomPanelLayout->addWidget(advancedCheckBox);

        confirmBox = new QDialogButtonBox(centralwidget);
        confirmBox->setObjectName(QString::fromUtf8("confirmBox"));
        confirmBox->setStandardButtons(QDialogButtonBox::Save);

        bottomPanelLayout->addWidget(confirmBox);


        verticalLayout->addLayout(bottomPanelLayout);

        coreboot_configurator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(coreboot_configurator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 585, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        coreboot_configurator->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSave_to_File);
        menuFile->addAction(actionImport_from_File);
        menuFile->addSeparator();
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_2);

        retranslateUi(coreboot_configurator);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(coreboot_configurator);
    } // setupUi

    void retranslateUi(QMainWindow *coreboot_configurator)
    {
        coreboot_configurator->setWindowTitle(QCoreApplication::translate("coreboot_configurator", "coreboot configurator", nullptr));
        actionInformation->setText(QCoreApplication::translate("coreboot_configurator", "Information", nullptr));
        actionAbout->setText(QCoreApplication::translate("coreboot_configurator", "About", nullptr));
        actionAbout_2->setText(QCoreApplication::translate("coreboot_configurator", "About", nullptr));
        actionSave_to_File->setText(QCoreApplication::translate("coreboot_configurator", "Save to File...", nullptr));
        actionImport_from_File->setText(QCoreApplication::translate("coreboot_configurator", "Import from File...", nullptr));
        actionExit->setText(QCoreApplication::translate("coreboot_configurator", "Exit", nullptr));
        actionSave_and_Exit->setText(QCoreApplication::translate("coreboot_configurator", "Save and Exit", nullptr));
        advancedCheckBox->setText(QCoreApplication::translate("coreboot_configurator", "Advanced mode", nullptr));
        menuFile->setTitle(QCoreApplication::translate("coreboot_configurator", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("coreboot_configurator", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class coreboot_configurator: public Ui_coreboot_configurator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COREBOOTCONFIGURATOR_H
