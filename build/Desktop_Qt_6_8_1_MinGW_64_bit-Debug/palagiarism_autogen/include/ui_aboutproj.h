/********************************************************************************
** Form generated from reading UI file 'aboutproj.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTPROJ_H
#define UI_ABOUTPROJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AboutProj
{
public:
    QLabel *aboutProj;
    QPushButton *back;

    void setupUi(QDialog *AboutProj)
    {
        if (AboutProj->objectName().isEmpty())
            AboutProj->setObjectName("AboutProj");
        AboutProj->resize(800, 600);
        aboutProj = new QLabel(AboutProj);
        aboutProj->setObjectName("aboutProj");
        aboutProj->setGeometry(QRect(280, 30, 401, 51));
        QFont font;
        font.setPointSize(30);
        aboutProj->setFont(font);
        back = new QPushButton(AboutProj);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 20, 65, 22));

        retranslateUi(AboutProj);

        QMetaObject::connectSlotsByName(AboutProj);
    } // setupUi

    void retranslateUi(QDialog *AboutProj)
    {
        AboutProj->setWindowTitle(QCoreApplication::translate("AboutProj", "Dialog", nullptr));
        aboutProj->setText(QCoreApplication::translate("AboutProj", "About Project", nullptr));
        back->setText(QCoreApplication::translate("AboutProj", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutProj: public Ui_AboutProj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPROJ_H
