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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(260, 140, 401, 51));
        QFont font;
        font.setPointSize(30);
        title->setFont(font);
        madeby = new QLabel(centralwidget);
        madeby->setObjectName("madeby");
        madeby->setGeometry(QRect(370, 220, 111, 41));
        QFont font1;
        font1.setPointSize(20);
        madeby->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(400, 420, 65, 22));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(260, 280, 391, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font2;
        font2.setPointSize(18);
        label->setFont(font2);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);

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
