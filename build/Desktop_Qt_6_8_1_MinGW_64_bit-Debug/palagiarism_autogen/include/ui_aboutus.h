/********************************************************************************
** Form generated from reading UI file 'aboutus.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUS_H
#define UI_ABOUTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_aboutUs
{
public:
    QLabel *label;
    QPushButton *back;

    void setupUi(QDialog *aboutUs)
    {
        if (aboutUs->objectName().isEmpty())
            aboutUs->setObjectName("aboutUs");
        aboutUs->resize(800, 600);
        aboutUs->setStyleSheet(QString::fromUtf8("/* Dialog with a gradient background for a futuristic feel */\n"
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
        label = new QLabel(aboutUs);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 10, 221, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cyber Alert")});
        font.setBold(true);
        label->setFont(font);
        back = new QPushButton(aboutUs);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 30, 65, 22));

        retranslateUi(aboutUs);

        QMetaObject::connectSlotsByName(aboutUs);
    } // setupUi

    void retranslateUi(QDialog *aboutUs)
    {
        aboutUs->setWindowTitle(QCoreApplication::translate("aboutUs", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("aboutUs", "About Us", nullptr));
        back->setText(QCoreApplication::translate("aboutUs", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutUs: public Ui_aboutUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
