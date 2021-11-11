/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *logoLabel;
    QLabel *aboutDescriptionLabel;
    QLabel *versionLabel;
    QLabel *emailLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(412, 273);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setText(QString::fromUtf8("<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">coreboot configurator</span></p></body></html>"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        logoLabel = new QLabel(AboutDialog);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logoLabel->sizePolicy().hasHeightForWidth());
        logoLabel->setSizePolicy(sizePolicy);
        logoLabel->setText(QString::fromUtf8(""));
        logoLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(logoLabel);

        aboutDescriptionLabel = new QLabel(AboutDialog);
        aboutDescriptionLabel->setObjectName(QString::fromUtf8("aboutDescriptionLabel"));
        sizePolicy.setHeightForWidth(aboutDescriptionLabel->sizePolicy().hasHeightForWidth());
        aboutDescriptionLabel->setSizePolicy(sizePolicy);
        aboutDescriptionLabel->setAlignment(Qt::AlignCenter);
        aboutDescriptionLabel->setWordWrap(true);

        verticalLayout->addWidget(aboutDescriptionLabel);

        versionLabel = new QLabel(AboutDialog);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setText(QString::fromUtf8(""));
        versionLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(versionLabel);

        emailLabel = new QLabel(AboutDialog);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(emailLabel->sizePolicy().hasHeightForWidth());
        emailLabel->setSizePolicy(sizePolicy1);
        emailLabel->setText(QString::fromUtf8("<html><head/><body><p><a href=\"https://support.starlabs.systems\"><span style=\" text-decoration: underline; color:#0000ff;\">starlabs.systems</span></a></p></body></html>"));
        emailLabel->setAlignment(Qt::AlignCenter);
        emailLabel->setOpenExternalLinks(true);

        verticalLayout->addWidget(emailLabel);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About", nullptr));
        aboutDescriptionLabel->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>A simple GUI to change settings in coreboot's CBFS, via the nvramtool utility.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
