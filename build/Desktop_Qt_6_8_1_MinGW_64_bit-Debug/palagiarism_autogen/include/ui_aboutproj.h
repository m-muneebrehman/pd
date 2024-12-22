/********************************************************************************
** Form generated from reading UI file 'aboutproj.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTPROJ_H
#define UI_ABOUTPROJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AboutProj
{
public:
    QLabel *aboutProj;
    QPushButton *back;

    void setupUi(QDialog *AboutProj)
    {
        if (AboutProj->objectName().isEmpty())
            AboutProj->setObjectName("AboutProj");
        AboutProj->resize(800, 600);
        AboutProj->setStyleSheet(QString::fromUtf8("/* Apply a light green background */\n"
"QDialog {\n"
"    background-color: lightgreen;\n"
"    font-family: 'Courier New', Courier, monospace; /* Stylish font */\n"
"}\n"
"\n"
"/* Style for labels */\n"
"QLabel {\n"
"    color: darkgreen;\n"
"    font-size: 28px;\n"
"    font-weight: bold;\n"
"    text-align: center;\n"
"}\n"
"\n"
"/* Style for buttons */\n"
"QPushButton {\n"
"    background-color: #4CAF50; /* Dark green */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 35px; /* Makes button rounder */\n"
"    padding: 10px 20px;\n"
"    font-size: 18px;\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2); /* Subtle shadow */\n"
"    transition: all 0.3s ease-in-out;\n"
"}\n"
"\n"
"/* Hover effect for buttons */\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* Slightly lighter green */\n"
"    transform: scale(1.05); /* Enlarge slightly */\n"
"}"));
        aboutProj = new QLabel(AboutProj);
        aboutProj->setObjectName("aboutProj");
        aboutProj->setGeometry(QRect(280, 30, 401, 51));
        QFont font;
        font.setBold(true);
        aboutProj->setFont(font);
        back = new QPushButton(AboutProj);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 20, 141, 71));

        retranslateUi(AboutProj);

        QMetaObject::connectSlotsByName(AboutProj);
    } // setupUi

    void retranslateUi(QDialog *AboutProj)
    {
        AboutProj->setWindowTitle(QCoreApplication::translate("AboutProj", "Dialog", nullptr));
        aboutProj->setText(QCoreApplication::translate("AboutProj", "About Project", nullptr));
        back->setText(QCoreApplication::translate("AboutProj", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutProj: public Ui_AboutProj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPROJ_H
