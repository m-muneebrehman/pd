/********************************************************************************
** Form generated from reading UI file 'demo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO_H
#define UI_DEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Demo
{
public:
    QPushButton *palagiarismP;
    QPushButton *DatabaseUpdate;
    QLabel *Title;
    QPushButton *back;

    void setupUi(QDialog *Demo)
    {
        if (Demo->objectName().isEmpty())
            Demo->setObjectName("Demo");
        Demo->resize(800, 600);
        palagiarismP = new QPushButton(Demo);
        palagiarismP->setObjectName("palagiarismP");
        palagiarismP->setGeometry(QRect(170, 170, 211, 191));
        DatabaseUpdate = new QPushButton(Demo);
        DatabaseUpdate->setObjectName("DatabaseUpdate");
        DatabaseUpdate->setGeometry(QRect(480, 170, 211, 191));
        Title = new QLabel(Demo);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(320, 20, 151, 61));
        QFont font;
        font.setPointSize(30);
        Title->setFont(font);
        back = new QPushButton(Demo);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 20, 65, 22));

        retranslateUi(Demo);

        QMetaObject::connectSlotsByName(Demo);
    } // setupUi

    void retranslateUi(QDialog *Demo)
    {
        Demo->setWindowTitle(QCoreApplication::translate("Demo", "Dialog", nullptr));
        palagiarismP->setText(QCoreApplication::translate("Demo", "Test for palagiarism", nullptr));
        DatabaseUpdate->setText(QCoreApplication::translate("Demo", "Update database", nullptr));
        Title->setText(QCoreApplication::translate("Demo", "Demo", nullptr));
        back->setText(QCoreApplication::translate("Demo", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Demo: public Ui_Demo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO_H
