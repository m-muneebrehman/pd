/********************************************************************************
** Form generated from reading UI file 'palagiarism.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PALAGIARISM_H
#define UI_PALAGIARISM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Palagiarism
{
public:
    QPushButton *back;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *test;

    void setupUi(QDialog *Palagiarism)
    {
        if (Palagiarism->objectName().isEmpty())
            Palagiarism->setObjectName("Palagiarism");
        Palagiarism->resize(800, 600);
        Palagiarism->setAcceptDrops(true);
        Palagiarism->setStyleSheet(QString::fromUtf8("/* Dialog with a gradient background for a futuristic feel */\n"
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
        back = new QPushButton(Palagiarism);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 20, 131, 41));
        lineEdit = new QLineEdit(Palagiarism);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(290, 160, 211, 151));
        lineEdit->setReadOnly(true);
        label = new QLabel(Palagiarism);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 90, 541, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cyber Alert")});
        font.setBold(true);
        label->setFont(font);
        label->setTextFormat(Qt::TextFormat::MarkdownText);
        test = new QPushButton(Palagiarism);
        test->setObjectName("test");
        test->setGeometry(QRect(340, 370, 121, 41));

        retranslateUi(Palagiarism);

        QMetaObject::connectSlotsByName(Palagiarism);
    } // setupUi

    void retranslateUi(QDialog *Palagiarism)
    {
        Palagiarism->setWindowTitle(QCoreApplication::translate("Palagiarism", "Dialog", nullptr));
        back->setText(QCoreApplication::translate("Palagiarism", "BACK", nullptr));
        label->setText(QCoreApplication::translate("Palagiarism", "# Drag and Drop your File here", nullptr));
        test->setText(QCoreApplication::translate("Palagiarism", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Palagiarism: public Ui_Palagiarism {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PALAGIARISM_H
