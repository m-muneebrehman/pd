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
        label = new QLabel(aboutUs);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 10, 221, 101));
        QFont font;
        font.setPointSize(30);
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
