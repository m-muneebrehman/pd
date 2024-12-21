#ifndef SECPAGE_H
#define SECPAGE_H

#include <QDialog>
#include "aboutproj.h"
#include "aboutus.h"
#include "demo.h"

namespace Ui {
class SecPage;
}

class SecPage : public QDialog
{
    Q_OBJECT

public:
    explicit SecPage(QWidget *parent = nullptr);
    ~SecPage();

private slots:
    void on_Aboutus_clicked();

    void on_Aboutpro_clicked();

    void on_Demo_clicked();


private:
    Ui::SecPage *ui;
    AboutProj *aboutProj;
    aboutUs *Aboutus;
    Demo *demo;
};

#endif // SECPAGE_H
