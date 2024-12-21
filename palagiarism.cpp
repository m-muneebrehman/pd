#include "palagiarism.h"
#include "ui_palagiarism.h"
#include "demo.h"

#include <QMimeData>
#include <QFileDialog>
#include <QFile>
#include <QDir>
#include <QFileInfo>
#include <QMessageBox>
#include <QCoreApplication>

Palagiarism::Palagiarism(Demo *demo, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Palagiarism)
    , _demo(demo) // Initialize Demo pointer
{
    ui->setupUi(this);

    // Enable drag-and-drop for the main widget
    setAcceptDrops(true);
}

Palagiarism::~Palagiarism()
{
    delete ui;
}

void Palagiarism::dragEnterEvent(QDragEnterEvent *event)
{
    // Check if the dragged data contains URLs (files)
    if (event->mimeData()->hasUrls()) {
        event->acceptProposedAction();
    }
}

void Palagiarism::dropEvent(QDropEvent *event)
{
    // Get the list of URLs
    const QMimeData *mimeData = event->mimeData();
    if (mimeData->hasUrls()) {
        QList<QUrl> urlList = mimeData->urls();
        if (!urlList.isEmpty()) {
            // Get the first file path
            QString sourceFilePath = urlList.first().toLocalFile();
            ui->lineEdit->setText(sourceFilePath); // Set the file path in the QLineEdit

            // Get the project directory by going up from the build directory
            QDir appDir(QCoreApplication::applicationDirPath());
            appDir.cdUp(); // Go one level up (from build directory)
            appDir.cdUp(); // Go another level up (to the project folder)
            QString targetFolder = appDir.absolutePath(); // Project folder path

            // Create the "target" folder if it doesn't exist
            QDir(targetFolder).mkpath("target");

            // Define the full target folder path
            QString targetFolderPath = targetFolder + "/target";

            // Get the file name from the source file path
            QFileInfo fileInfo(sourceFilePath);
            QString targetFilePath = targetFolderPath + "/" + fileInfo.fileName();

            // Copy the file to the target folder
            QFile file(sourceFilePath);
            if (file.copy(targetFilePath)) {
                QMessageBox::information(this, "Success", "File saved to target folder: " + targetFilePath);
            } else {
                QMessageBox::warning(this, "Error", "Failed to copy file to target folder.");
            }
        }
    }
}

void Palagiarism::on_test_clicked()
{
    // You can define functionality for the test button here
    QMessageBox::information(this, "Test", "Test button clicked.");
}

void Palagiarism::on_back_clicked()
{
    this->hide();       // Hide the current window (Plagiarism)
    _demo->show();      // Show the Demo window again
}
