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
        Aboutus = new QPushButton(SecPage);
        Aboutus->setObjectName("Aboutus");
        Aboutus->setGeometry(QRect(80, 250, 151, 71));
        Aboutpro = new QPushButton(SecPage);
        Aboutpro->setObjectName("Aboutpro");
        Aboutpro->setGeometry(QRect(360, 250, 151, 71));
        Demo = new QPushButton(SecPage);
        Demo->setObjectName("Demo");
        Demo->setGeometry(QRect(600, 250, 151, 71));

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
