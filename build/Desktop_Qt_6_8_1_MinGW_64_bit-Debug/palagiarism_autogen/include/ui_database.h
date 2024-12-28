/********************************************************************************
** Form generated from reading UI file 'database.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASE_H
#define UI_DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Database
{
public:
    QPushButton *back;
    QPushButton *Addbutton;
    QPushButton *removeButton;
    QLineEdit *AddFile;
    QLabel *label;
    QLabel *label_2;
    QListWidget *availableFiles;

    void setupUi(QDialog *Database)
    {
        if (Database->objectName().isEmpty())
            Database->setObjectName("Database");
        Database->resize(800, 600);
        Database->setAcceptDrops(false);
        Database->setStyleSheet(QString::fromUtf8("/* Dialog with a gradient background for a futuristic feel */\n"
"QDialog {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"                                stop:0 #2c3e50, stop:1 #4ca1af); /* Gradient */\n"
"    font-family: 'Cyber Alert', sans-serif; /* Cyber Alert font family */\n"
"    color: #ecf0f1; /* Light text for contrast */\n"
"    border-radius: 12px; /* Rounded edges */\n"
"}\n"
"\n"
"/* Style for labels */\n"
"QLabel {\n"
"    color: #00ffcc; /* Neon aqua */\n"
"    font-size: 20px; /* Slightly smaller font size */\n"
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
"    border-radius: 20px; /* R"
                        "ounded edges */\n"
"    padding: 10px 20px; /* Adjusted padding */\n"
"    font-size: 16px; /* Font size */\n"
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
"    padding: 6px 10px; /* Adjusted padding */\n"
"    font-size: 14px; /* Font size */\n"
"    font-family: 'Cyber Alert', sans-serif; /* Cyber Alert font */\n"
"}\n"
"\n"
"/* Style for QListWidget */\n"
"QListWidget {\n"
"    background-color: #"
                        "1c2833; /* Dark background */\n"
"    color: #ecf0f1; /* Light text */\n"
"    border: 2px solid #00d1b2; /* Neon border */\n"
"    border-radius: 12px; /* Rounded edges */\n"
"    font-family: 'Cyber Alert', sans-serif; /* Cyber Alert font */\n"
"    font-size: 14px; /* Font size */\n"
"    padding: 10px; /* Padding */\n"
"}\n"
"/* Focus effect for line edits */\n"
"QLineEdit:focus {\n"
"    border-color: #34e89e; /* Change border color when focused */\n"
"}\n"
""));
        back = new QPushButton(Database);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 20, 111, 51));
        Addbutton = new QPushButton(Database);
        Addbutton->setObjectName("Addbutton");
        Addbutton->setGeometry(QRect(140, 300, 141, 51));
        removeButton = new QPushButton(Database);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(570, 340, 151, 51));
        removeButton->setAcceptDrops(true);
        AddFile = new QLineEdit(Database);
        AddFile->setObjectName("AddFile");
        AddFile->setGeometry(QRect(100, 240, 221, 31));
        AddFile->setReadOnly(true);
        label = new QLabel(Database);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 200, 121, 31));
        label_2 = new QLabel(Database);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(600, 60, 121, 31));
        availableFiles = new QListWidget(Database);
        availableFiles->setObjectName("availableFiles");
        availableFiles->setGeometry(QRect(520, 110, 256, 192));

        retranslateUi(Database);

        QMetaObject::connectSlotsByName(Database);
    } // setupUi

    void retranslateUi(QDialog *Database)
    {
        Database->setWindowTitle(QCoreApplication::translate("Database", "Dialog", nullptr));
        back->setText(QCoreApplication::translate("Database", "BACK", nullptr));
        Addbutton->setText(QCoreApplication::translate("Database", "Add File", nullptr));
        removeButton->setText(QCoreApplication::translate("Database", "Remove File", nullptr));
        label->setText(QCoreApplication::translate("Database", "Add file here", nullptr));
        label_2->setText(QCoreApplication::translate("Database", "Present Files", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Database: public Ui_Database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASE_H
