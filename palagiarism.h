#ifndef PALAGIARISM_H
#define PALAGIARISM_H

#include <QDialog>
#include <QDragEnterEvent>
#include <QDropEvent>
#include "result.h"

class Demo; // Forward declaration

namespace Ui {
class Palagiarism;
}

class Palagiarism : public QDialog
{
    Q_OBJECT

public:
    explicit Palagiarism(Demo *demo, QWidget *parent = nullptr); // Constructor accepts Demo pointer
    ~Palagiarism();

protected:
    void dragEnterEvent(QDragEnterEvent *event) override; // Handle drag enter event
    void dropEvent(QDropEvent *event) override; // Handle drop event

private slots:
    void on_test_clicked();
    void on_back_clicked();

private:
    Ui::Palagiarism *ui;
    Demo *_demo; // Pointer to Demo for navigating back
    Result *_result;
};

#endif // PALAGIARISM_H
