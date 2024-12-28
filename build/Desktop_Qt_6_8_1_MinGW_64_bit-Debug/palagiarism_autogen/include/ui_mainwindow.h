/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("/* Main window with a gradient background */\n"
"QMainWindow {\n"
"    background: qlineargradient(to bottom right, #1E2A38, #3A506B); /* Subtle gradient */\n"
"    font-family: 'Arial', sans-serif; /* Clean, modern font */\n"
"    color: #F4F4F9; /* Light text for contrast */\n"
"    border: none; /* Ensure no unwanted borders appear */\n"
"}\n"
"\n"
"/* Style for labels */\n"
"QLabel {\n"
"    color: #F4F4F9; /* Light text */\n"
"    font-size: 28px; /* Adjusted for better visibility */\n"
"    font-weight: bold; /* Slight emphasis */\n"
"    text-align: center;\n"
"}\n"
"\n"
"/* Title-specific styling */\n"
"QLabel#title {\n"
"    font-size: 36px; /* Emphasized title */\n"
"    color: #00D4FF; /* Eye-catching neon blue */\n"
"    margin-top: 20px; /* Added spacing if needed */\n"
"}\n"
"\n"
"/* Style for buttons */\n"
"QPushButton {\n"
"    background: qlineargradient(to bottom, #007BFF, #0056B3); /* Modern blue gradient */\n"
"    color: #FFFFFF; /* White text for readability */\n"
"    border: none; /* No"
                        " border for minimalism */\n"
"    border-radius: 10px; /* Soft corners */\n"
"    padding: 10px 20px; /* Comfortable padding */\n"
"    font-size: 18px; /* Appropriately sized font */\n"
"    font-weight: bold; /* Emphasize button text */\n"
"    margin-top: 20px; /* Space from other elements */\n"
"}\n"
"\n"
"/* Hover effect for buttons */\n"
"QPushButton:hover {\n"
"    background: qlineargradient(to bottom, #0056B3, #003B73); /* Darker blue on hover */\n"
"    color: #F4F4F9; /* Light text */\n"
"    cursor: pointer; /* Change cursor to pointer for hover effect */\n"
"}\n"
"\n"
"/* Disable QPushButton default focus outline */\n"
"QPushButton:focus {\n"
"    outline: none;\n"
"}\n"
"\n"
"/* Style for line edits */\n"
"QLineEdit {\n"
"    background-color: #2C3E50; /* Dark input box */\n"
"    color: #F4F4F9; /* Light text */\n"
"    border: 2px solid #00D4FF; /* Neon blue border */\n"
"    border-radius: 8px; /* Soft corners */\n"
"    padding: 8px; /* Comfortable padding */\n"
"    font-size: 16px; /* Legib"
                        "le text */\n"
"}\n"
"\n"
"/* Focus effect for line edits */\n"
"QLineEdit:focus {\n"
"    border-color: #007BFF; /* Brighter blue on focus */\n"
"    outline: none; /* Remove default focus outline */\n"
"}\n"
"\n"
"/* General adjustments */\n"
"* {\n"
"    margin: 0;\n"
"    padding: 0;\n"
"    box-sizing: border-box;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("/* Main window with a gradient background */\n"
"QMainWindow {\n"
"    background: qlineargradient(to bottom right, #1E2A38, #3A506B); /* Subtle gradient */\n"
"    font-family: 'Arial', sans-serif; /* Clean, modern font */\n"
"    color: #F4F4F9; /* Light text for contrast */\n"
"}\n"
"\n"
"/* Style for labels (minimalistic design) */\n"
"QLabel {\n"
"    color: #F4F4F9; /* Light text */\n"
"    font-size: 24px; /* Clean size */\n"
"    font-weight: bold; /* Slight emphasis */\n"
"    text-align: center;\n"
"}\n"
"\n"
"/* Title-specific styling */\n"
"QLabel#title {\n"
"    font-size: 32px; /* Emphasized title */\n"
"    color: #00D4FF; /* Eye-catching neon blue */\n"
"}\n"
"\n"
"/* Style for buttons */\n"
"QPushButton {\n"
"    background: qlineargradient(to bottom, #007BFF, #0056B3); /* Modern blue gradient */\n"
"    color: #FFFFFF; /* White text for readability */\n"
"    border: none; /* No border for minimalism */\n"
"    border-radius: 10px; /* Soft corners */\n"
"    padding: 10px 20px; /* Comfortable"
                        " padding */\n"
"    font-size: 18px; /* Appropriately sized font */\n"
"    font-weight: bold; /* Emphasize button text */\n"
"}\n"
"\n"
"/* Hover effect for buttons */\n"
"QPushButton:hover {\n"
"    background: qlineargradient(to bottom, #0056B3, #003B73); /* Darker blue on hover */\n"
"    color: #F4F4F9; /* Light text */\n"
"}\n"
"\n"
"/* Style for line edits */\n"
"QLineEdit {\n"
"    background-color: #2C3E50; /* Dark input box */\n"
"    color: #F4F4F9; /* Light text */\n"
"    border: 2px solid #00D4FF; /* Neon blue border */\n"
"    border-radius: 8px; /* Soft corners */\n"
"    padding: 8px; /* Comfortable padding */\n"
"    font-size: 16px; /* Legible text */\n"
"}\n"
"\n"
"/* Focus effect for line edits */\n"
"QLineEdit:focus {\n"
"    border-color: #007BFF; /* Brighter blue on focus */\n"
"    outline: none; /* Remove default focus outline */\n"
"}\n"
"\n"
"/* Style for QListWidget */\n"
"QListWidget {\n"
"    background-color: #2C3E50; /* Dark background */\n"
"    color: #F4F4F9; /* Light text *"
                        "/\n"
"    border: none; /* Minimalist design */\n"
"    border-radius: 8px; /* Rounded edges */\n"
"    padding: 8px; /* Comfortable spacing */\n"
"    font-size: 16px; /* Clean font size */\n"
"}\n"
"\n"
"/* Style for selected items in QListWidget */\n"
"QListWidget::item:selected {\n"
"    background-color: #00D4FF; /* Highlight color */\n"
"    color: #FFFFFF; /* Text color for contrast */\n"
"}\n"
"\n"
"/* Hover effect for QListWidget items */\n"
"QListWidget::item:hover {\n"
"    background-color: #007BFF; /* Subtle blue hover effect */\n"
"    color: #FFFFFF; /* Light text */\n"
"}\n"
""));
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(90, 120, 681, 141));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cyber Alert")});
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("*{\n"
"font-size: 36px; /* Increased font size */\n"
"}"));
        title->setTextFormat(Qt::TextFormat::MarkdownText);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 310, 201, 51));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "# Plagiarism Detector", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
