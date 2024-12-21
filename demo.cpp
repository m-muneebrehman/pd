#include "demo.h"
#include "ui_demo.h"
#include "secpage.h"

Demo::Demo(SecPage *secPage, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Demo)
    , _secPage(secPage) // Initialize SecPage pointer
{
    ui->setupUi(this);
}

Demo::~Demo()
{
    delete ui;
}

void Demo::on_DatabaseUpdate_clicked()
{
    _database = new Database(this);
    hide();
    _database->show();
}

void Demo::on_palagiarismP_clicked()
{
    palagiarism = new Palagiarism(this);
    hide();
    palagiarism->show();
}

void Demo::on_back_clicked()
{
    this->hide();      // Hide the Demo dialog
    _secPage->show();  // Show the SecPage dialog again
}
