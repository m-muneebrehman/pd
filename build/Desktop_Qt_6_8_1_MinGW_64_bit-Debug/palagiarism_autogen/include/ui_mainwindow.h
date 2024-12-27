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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QLabel *madeby;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("/* Dialog with a gradient background for a futuristic feel */\n"
"QMainWindow {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                stop:0 #2c3e50, stop:1 #4ca1af); /* Gradient */\n"
"    font-family: 'Cyber Alert', sans-serif; /* Cyber Alert font family */\n"
"    color: #ecf0f1; /* Light text for contrast */\n"
"    border-radius: 12px; /* Rounded edges */4\n"
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
"                           "
                        "     stop:0 #1f4037, stop:1 #99f2c8); /* Gradient background */\n"
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
"    background-co"
                        "lor: #1c2833; /* Dark background */\n"
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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(260, 140, 401, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cyber Alert")});
        font.setBold(true);
        title->setFont(font);
        madeby = new QLabel(centralwidget);
        madeby->setObjectName("madeby");
        madeby->setGeometry(QRect(370, 220, 111, 41));
        madeby->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(400, 420, 65, 22));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(260, 280, 391, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Palagiarism Detector", nullptr));
        madeby->setText(QCoreApplication::translate("MainWindow", "Made by: ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Muhammad Muneeb ur Rehman", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Hafiz Muhammad Salman", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Muaaz Waseem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
