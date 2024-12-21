#include "aboutus.h"
#include "ui_aboutus.h"
#include "secpage.h"

aboutUs::aboutUs(SecPage *secPage, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::aboutUs)
    , _secPage(secPage) // Initialize SecPage pointer
{
    ui->setupUi(this);
}

aboutUs::~aboutUs()
{
    delete ui;
}

void aboutUs::on_back_clicked()
{
    this->hide();      // Hide the aboutUs dialog
    _secPage->show();  // Show the SecPage dialog again
}
