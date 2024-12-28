#include "palagiarism.h"
#include "ui_palagiarism.h"
#include "demo.h"
#include <windows.h>
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

            // Check if the file is a .txt file
            QFileInfo fileInfo(sourceFilePath);
            if (fileInfo.suffix().toLower() != "txt") {
                QMessageBox::warning(this, "Invalid File", "Only .txt files are allowed. Please upload a valid .txt file.");
                return;
            }

            // Set the file path in the QLineEdit
            ui->lineEdit->setText(sourceFilePath);

            // Get the project directory by going up from the build directory
            QDir appDir(QCoreApplication::applicationDirPath());
            QString targetFolder = appDir.absolutePath(); // Project folder path

            // Create the "target" folder if it doesn't exist
            QDir(targetFolder).mkpath("target");

            // Define the full target folder path
            QString targetFolderPath = targetFolder + "/target";

            // Define the target file path
            QString targetFilePath = targetFolderPath + "/" + fileInfo.fileName();

            // Copy the file to the target folder
            QFile file(sourceFilePath);
            if (file.copy(targetFilePath)) {
                QMessageBox::information(this, "Success", "File saved successfully.");
            } else {
                QMessageBox::warning(this, "Error", "Failed to copy file to target folder.");
            }
        }
    }
}

void Palagiarism::on_test_clicked()
{
    // Get the file path from the QLineEdit
    QString filePath = ui->lineEdit->text();

    // Check if the file exists
    if (filePath.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please upload a file before clicking Test.");
        return;
    }

    // Check if the file is a .txt file
    QFileInfo fileInfo(filePath);
    if (fileInfo.suffix().toLower() != "txt") {
        QMessageBox::warning(this, "Invalid File", "Only .txt files are allowed. Please upload a valid .txt file.");
        return;
    }

    // Proceed with the plagiarism check (or other logic)
    QMessageBox::information(this, "Test", "Test button clicked. File accepted.");

    // Example: Open the Result window
    _result = new Result(this);
    _result->show();
    this->hide();
}

void Palagiarism::on_back_clicked()
{
    _demo->show();      // Show the Demo window again
    Sleep(70);
    this->hide();       // Hide the current window (Plagiarism)
}
