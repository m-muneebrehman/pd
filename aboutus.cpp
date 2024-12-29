#include "aboutus.h"
#include "ui_aboutus.h"
#include "secpage.h"
#include <windows.h>

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
    _secPage->show();  // Show the SecPage dialog again
    Sleep(50);
    this->hide();      // Hide the aboutUs dialog
}
