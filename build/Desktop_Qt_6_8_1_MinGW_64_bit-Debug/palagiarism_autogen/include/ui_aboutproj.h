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
    QLabel *info;

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
"    font-size: 18px; /* Reduced font size */\n"
"    font-weight: bold;\n"
"    text-align: center;\n"
"    font-family: 'Cyber Alert', sans-serif; /* Cyber Alert font */\n"
"}\n"
"\n"
"/* Style for buttons */\n"
"QPushButton {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                stop:0 #1f4037, stop:1 #99f2c8); /* Gradient background */\n"
"    color: #1c2833; /* Dark text */\n"
"    border: none; /* No border */\n"
"    border-radius: 20"
                        "px; /* Rounded edges */\n"
"    padding: 10px 20px; /* Adjusted padding for smaller button */\n"
"    font-size: 16px; /* Reduced font size */\n"
"    font-weight: bold;\n"
"    font-family: 'Cyber Alert', sans-serif; /* Cyber Alert font */\n"
"}\n"
"\n"
"/* Hover effect for buttons */\n"
"QPushButton:hover {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                stop:0 #34e89e, stop:1 #0f3443); /* Vibrant gradient */\n"
"    color: #ecf0f1; /* Switch text to light for contrast */\n"
"}\n"
"\n"
"/* Style for line edits */\n"
"QLineEdit {\n"
"    background-color: #1c2833; /* Dark background */\n"
"    color: #ecf0f1; /* Light text */\n"
"    border: 2px solid #00d1b2; /* Neon border */\n"
"    border-radius: 12px; /* Adjusted for smaller size */\n"
"    padding: 6px 10px; /* Adjusted padding for smaller input */\n"
"    font-size: 16px; /* Reduced font size */\n"
"    font-family: 'Cyber Alert', sans-serif; /* Cyber Alert font */\n"
"}\n"
"\n"
"/* Focus eff"
                        "ect for line edits */\n"
"QLineEdit:focus {\n"
"    border-color: #34e89e; /* Change border color when focused */\n"
"}\n"
""));
        aboutProj = new QLabel(AboutProj);
        aboutProj->setObjectName("aboutProj");
        aboutProj->setGeometry(QRect(290, 40, 401, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cyber Alert")});
        font.setBold(true);
        aboutProj->setFont(font);
        aboutProj->setStyleSheet(QString::fromUtf8("*{\n"
"font-size: 26px; /* Reduced font size */\n"
"    font-weight: bold;\n"
"    text-align: center;\n"
"}"));
        aboutProj->setTextFormat(Qt::TextFormat::MarkdownText);
        back = new QPushButton(AboutProj);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 20, 141, 41));
        info = new QLabel(AboutProj);
        info->setObjectName("info");
        info->setGeometry(QRect(50, 130, 691, 471));
        info->setStyleSheet(QString::fromUtf8("*{\n"
"}"));
        info->setTextFormat(Qt::TextFormat::MarkdownText);
        info->setWordWrap(true);

        retranslateUi(AboutProj);

        QMetaObject::connectSlotsByName(AboutProj);
    } // setupUi

    void retranslateUi(QDialog *AboutProj)
    {
        AboutProj->setWindowTitle(QCoreApplication::translate("AboutProj", "Dialog", nullptr));
        aboutProj->setText(QCoreApplication::translate("AboutProj", "## About Project", nullptr));
        back->setText(QCoreApplication::translate("AboutProj", "BACK", nullptr));
        info->setText(QCoreApplication::translate("AboutProj", "# Plagiarism Detector System\n"
"\n"
"The **Plagiarism Detector System** is built using the **Qt framework** and **C++ standard libraries**. \n"
"\n"
"## Project Goal\n"
"\n"
"The primary objective of this project is to demonstrate our understanding of **data structures** and **algorithms**.\n"
"\n"
"## Key Features\n"
"\n"
"- Compares similarities between different text documents.\n"
"- Reads files in `.txt` format.\n"
"- Tokenizes words for analysis.\n"
"- Uses various algorithms for similarity comparison.\n"
"\n"
"This project highlights our ability to apply computational techniques to practical problems.\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutProj: public Ui_AboutProj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPROJ_H
