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
        back = new QPushButton(Database);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 20, 65, 22));
        Addbutton = new QPushButton(Database);
        Addbutton->setObjectName("Addbutton");
        Addbutton->setGeometry(QRect(150, 320, 65, 22));
        removeButton = new QPushButton(Database);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(580, 340, 91, 22));
        removeButton->setAcceptDrops(true);
        AddFile = new QLineEdit(Database);
        AddFile->setObjectName("AddFile");
        AddFile->setGeometry(QRect(130, 240, 113, 20));
        label = new QLabel(Database);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 150, 111, 16));
        label_2 = new QLabel(Database);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(600, 60, 121, 16));
        availableFiles = new QListWidget(Database);
        availableFiles->setObjectName("availableFiles");
        availableFiles->setGeometry(QRect(500, 110, 256, 192));

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
