#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set the pixmap for the title QLabel
    QPixmap pixmap(":/images/main.png");
    if (!pixmap.isNull()) {
        ui->title->setPixmap(pixmap);
        ui->title->setScaledContents(true); // Ensure the image scales with the label
    } else {
        qDebug() << "Failed to load main.png";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    secPage = new SecPage(this);
    secPage->show();
    hide();
}
