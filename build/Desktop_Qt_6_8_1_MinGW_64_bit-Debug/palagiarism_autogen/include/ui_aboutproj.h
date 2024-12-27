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
        AboutProj->setStyleSheet(QString::fromUtf8("/* Dialog with a gradient background for a futuristic feel */\n"
"QDialog {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                stop:0 #2c3e50, stop:1 #4ca1af); /* Gradient */\n"
"    font-family: 'Cyber Alert', sans-serif; /* Cyber Alert font family */\n"
"    color: #ecf0f1; /* Light text for contrast */\n"
"    border-radius: 12px; /* Rounded edges */\n"
"}\n"
"\n"
"/* Style for labels with neon effect */\n"
"QLabel {\n"
"    color: #00ffcc; /* Neon aqua */\n"
"    font-size: 20px; /* Slightly smaller font size */\n"
"    font-weight: bold;\n"
"    text-align: center;\n"
"    text-shadow: 0px 0px 8px rgba(0, 255, 204, 0.8), /* Outer neon glow */\n"
"                 0px 0px 4px rgba(0, 255, 204, 0.6); /* Inner glow */\n"
"    font-family: 'Cyber Alert', sans-serif; /* Cyber Alert font */\n"
"}\n"
"\n"
"/* Style for buttons */\n"
"QPushButton {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                "
                        "stop:0 #1f4037, stop:1 #99f2c8); /* Gradient background */\n"
"    color: #1c2833; /* Dark text */\n"
"    border: none; /* No border */\n"
"    border-radius: 20px; /* Rounded edges */\n"
"    padding: 10px 20px; /* Adjusted padding for smaller size */\n"
"    font-size: 16px; /* Reduced font size */\n"
"    font-weight: bold;\n"
"    font-family: 'Cyber Alert', sans-serif; /* Cyber Alert font */\n"
"    box-shadow: 0px 8px 12px rgba(0, 0, 0, 0.3); /* Glow effect */\n"
"    transition: all 0.3s ease-in-out;\n"
"}\n"
"\n"
"/* Hover effect for buttons */\n"
"QPushButton:hover {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                stop:0 #34e89e, stop:1 #0f3443); /* Vibrant gradient */\n"
"    transform: scale(1.1); /* Slightly enlarge */\n"
"    box-shadow: 0px 10px 15px rgba(0, 255, 170, 0.7); /* Neon glow */\n"
"    color: #ecf0f1; /* Switch text to light for contrast */\n"
"}\n"
"\n"
"/* Style for line edits */\n"
"QLineEdit {\n"
"    background-color: "
                        "#1c2833; /* Dark background */\n"
"    color: #ecf0f1; /* Light text */\n"
"    border: 2px solid #00d1b2; /* Neon border */\n"
"    border-radius: 12px; /* Adjusted for smaller size */\n"
"    padding: 6px 10px; /* Adjusted padding for smaller input */\n"
"    font-size: 14px; /* Reduced font size */\n"
"    font-family: 'Cyber Alert', sans-serif; /* Cyber Alert font */\n"
"    box-shadow: 0px 4px 8px rgba(0, 0, 0, 0.2); /* Subtle shadow */\n"
"}\n"
"\n"
"/* Focus effect for line edits */\n"
"QLineEdit:focus {\n"
"    border-color: #34e89e; /* Change border color when focused */\n"
"    box-shadow: 0px 0px 10px rgba(52, 232, 158, 0.8); /* Neon glow on focus */\n"
"}\n"
""));
        aboutProj = new QLabel(AboutProj);
        aboutProj->setObjectName("aboutProj");
        aboutProj->setGeometry(QRect(280, 30, 401, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cyber Alert")});
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
