#ifndef DATABASE_H
#define DATABASE_H

#include <QDialog>
#include <QDropEvent>
#include <QMimeData>
#include <QListWidgetItem>
#include <QFile>
#include <QDir>

class Demo; // Forward declaration of Demo class

namespace Ui {
class Database;
}

class Database : public QDialog
{
    Q_OBJECT

public:
    explicit Database(Demo *demo, QWidget *parent = nullptr); // Constructor accepts Demo pointer
    ~Database();

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;

private slots:
    void on_pushButton_clicked(); // Close the dialog
    void on_Addbutton_clicked();  // Add a file
    void on_removeButton_clicked(); // Remove a file
    void on_back_clicked();  // Back button functionality

private:
    Ui::Database *ui;
    Demo *_demo; // Pointer to Demo for navigating back
    QString tempFilePath; // Temporarily store the dragged file path
    QString databaseFolderPath; // Path to the "database" folder
    void loadFilesIntoList(); // Helper to load files into the list
};

#endif // DATABASE_H
