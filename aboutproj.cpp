#include "aboutproj.h"
#include "ui_aboutproj.h"
#include "secpage.h"


AboutProj::AboutProj(SecPage *secPage, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutProj)
    , _secPage(secPage) // Initialize SecPage pointer
{
    ui->setupUi(this);
}

AboutProj::~AboutProj()
{
    delete ui;
}

void AboutProj::on_back_clicked()
{
    _secPage->show();  // Show the SecPage dialog again
    this->hide();      // Hide the AboutProj dialog
}
