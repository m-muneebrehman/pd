#include "secpage.h"
#include "ui_secpage.h"
#include <windows.h>

SecPage::SecPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecPage)
{
    ui->setupUi(this);
}

SecPage::~SecPage()
{
    delete ui;
}

void SecPage::on_Aboutus_clicked()
{
    Aboutus = new aboutUs(this);
    Aboutus->show();
    Sleep(10);
    hide();
}


void SecPage::on_Aboutpro_clicked()
{
    aboutProj = new AboutProj(this);
    aboutProj->show();
    Sleep(10);
    hide();
}


void SecPage::on_Demo_clicked()
{
    demo = new Demo(this);
    demo->show();
    Sleep(10);
    hide();
}




