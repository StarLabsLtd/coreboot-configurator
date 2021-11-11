/********************************************************************************
** Form generated from reading UI file 'aboutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutWindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *AboutCountainer;
    QVBoxLayout *inner;
    QLabel *Title;
    QVBoxLayout *description;
    QLabel *text;
    QHBoxLayout *support;
    QLabel *email;
    QDialogButtonBox *okButton;

    void setupUi(QWidget *aboutWindow)
    {
        if (aboutWindow->objectName().isEmpty())
            aboutWindow->setObjectName(QString::fromUtf8("aboutWindow"));
        aboutWindow->resize(475, 245);
        aboutWindow->setMinimumSize(QSize(475, 245));
        aboutWindow->setMaximumSize(QSize(475, 245));
        gridLayout = new QGridLayout(aboutWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        AboutCountainer = new QHBoxLayout();
        AboutCountainer->setObjectName(QString::fromUtf8("AboutCountainer"));
        inner = new QVBoxLayout();
        inner->setObjectName(QString::fromUtf8("inner"));
        Title = new QLabel(aboutWindow);
        Title->setObjectName(QString::fromUtf8("Title"));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        Title->setFont(font);
        Title->setAlignment(Qt::AlignCenter);

        inner->addWidget(Title);

        description = new QVBoxLayout();
        description->setObjectName(QString::fromUtf8("description"));
        text = new QLabel(aboutWindow);
        text->setObjectName(QString::fromUtf8("text"));
        text->setMinimumSize(QSize(0, 30));
        text->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        description->addWidget(text);


        inner->addLayout(description);

        support = new QHBoxLayout();
        support->setObjectName(QString::fromUtf8("support"));
        email = new QLabel(aboutWindow);
        email->setObjectName(QString::fromUtf8("email"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(email->sizePolicy().hasHeightForWidth());
        email->setSizePolicy(sizePolicy);
        email->setMinimumSize(QSize(100, 0));
        email->setLayoutDirection(Qt::LeftToRight);
        email->setAlignment(Qt::AlignCenter);
        email->setOpenExternalLinks(true);

        support->addWidget(email);


        inner->addLayout(support);

        okButton = new QDialogButtonBox(aboutWindow);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setMinimumSize(QSize(0, 0));
        okButton->setStandardButtons(QDialogButtonBox::Ok);
        okButton->setCenterButtons(true);

        inner->addWidget(okButton);


        AboutCountainer->addLayout(inner);


        gridLayout->addLayout(AboutCountainer, 0, 0, 1, 1);


        retranslateUi(aboutWindow);

        QMetaObject::connectSlotsByName(aboutWindow);
    } // setupUi

    void retranslateUi(QWidget *aboutWindow)
    {
        aboutWindow->setWindowTitle(QCoreApplication::translate("aboutWindow", "Form", nullptr));
        Title->setText(QCoreApplication::translate("aboutWindow", "coreboot configurator", nullptr));
        text->setText(QCoreApplication::translate("aboutWindow", "<html><head/><body><p align=\"center\">A simply GUI to change settings in coreboot's CBFS,</p><p align=\"center\">via the nvramtool utility.</p></body></html>", nullptr));
        email->setText(QCoreApplication::translate("aboutWindow", "<html><head/><body><p><a href=\"https://support.starlabs.systems\"><span style=\" text-decoration: underline; color:#0000ff;\">starlabs.systems</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutWindow: public Ui_aboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
