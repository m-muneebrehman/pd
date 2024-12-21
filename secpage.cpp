#include "secpage.h"
#include "ui_secpage.h"

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
    hide();
    Aboutus->show();
}


void SecPage::on_Aboutpro_clicked()
{
    aboutProj = new AboutProj(this);
    aboutProj->show();
    hide();
}


void SecPage::on_Demo_clicked()
{
    demo = new Demo(this);
    hide();
    demo->show();
}




