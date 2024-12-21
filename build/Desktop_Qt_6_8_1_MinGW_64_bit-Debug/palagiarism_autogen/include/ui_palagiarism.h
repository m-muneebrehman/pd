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
        back = new QPushButton(Palagiarism);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 20, 65, 22));
        lineEdit = new QLineEdit(Palagiarism);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(290, 160, 211, 151));
        label = new QLabel(Palagiarism);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 80, 401, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(20);
        label->setFont(font);
        test = new QPushButton(Palagiarism);
        test->setObjectName("test");
        test->setGeometry(QRect(360, 380, 65, 22));

        retranslateUi(Palagiarism);

        QMetaObject::connectSlotsByName(Palagiarism);
    } // setupUi

    void retranslateUi(QDialog *Palagiarism)
    {
        Palagiarism->setWindowTitle(QCoreApplication::translate("Palagiarism", "Dialog", nullptr));
        back->setText(QCoreApplication::translate("Palagiarism", "BACK", nullptr));
        label->setText(QCoreApplication::translate("Palagiarism", "Drag and Drop your file here", nullptr));
        test->setText(QCoreApplication::translate("Palagiarism", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Palagiarism: public Ui_Palagiarism {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PALAGIARISM_H
