/********************************************************************************
** Form generated from reading UI file 'secpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECPAGE_H
#define UI_SECPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecPage
{
public:
    QPushButton *Aboutus;
    QPushButton *Aboutpro;
    QPushButton *Demo;

    void setupUi(QDialog *SecPage)
    {
        if (SecPage->objectName().isEmpty())
            SecPage->setObjectName("SecPage");
        SecPage->resize(800, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Cyber Alert")});
        font.setPointSize(36);
        SecPage->setFont(font);
        SecPage->setStyleSheet(QString::fromUtf8("/* Dialog with a gradient background for a futuristic feel */\n"
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
"    font-size: 20px; /* Reduced font size */\n"
"    font-weight: bold;\n"
"    font-family: 'Brittanic', sans-serif; /* Brittanic font for buttons */\n"
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
"/* F"
                        "ocus effect for line edits */\n"
"QLineEdit:focus {\n"
"    border-color: #34e89e; /* Change border color when focused */\n"
"}\n"
""));
        Aboutus = new QPushButton(SecPage);
        Aboutus->setObjectName("Aboutus");
        Aboutus->setGeometry(QRect(310, 250, 181, 71));
        Aboutpro = new QPushButton(SecPage);
        Aboutpro->setObjectName("Aboutpro");
        Aboutpro->setGeometry(QRect(60, 250, 181, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Brittanic")});
        font1.setBold(true);
        Aboutpro->setFont(font1);
        Demo = new QPushButton(SecPage);
        Demo->setObjectName("Demo");
        Demo->setGeometry(QRect(570, 250, 181, 71));

        retranslateUi(SecPage);

        QMetaObject::connectSlotsByName(SecPage);
    } // setupUi

    void retranslateUi(QDialog *SecPage)
    {
        SecPage->setWindowTitle(QCoreApplication::translate("SecPage", "Dialog", nullptr));
        Aboutus->setText(QCoreApplication::translate("SecPage", "About Us", nullptr));
        Aboutpro->setText(QCoreApplication::translate("SecPage", "About Project", nullptr));
        Demo->setText(QCoreApplication::translate("SecPage", "Demo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecPage: public Ui_SecPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECPAGE_H
