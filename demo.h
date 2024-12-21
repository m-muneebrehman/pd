#pragma once
#ifndef DEMO_H
#define DEMO_H

#include <QDialog>
#include "palagiarism.h"
#include "database.h"

class SecPage; // Forward declaration

namespace Ui {
class Demo;
}

class Demo : public QDialog
{
    Q_OBJECT

public:
    explicit Demo(SecPage *secPage, QWidget *parent = nullptr); // Constructor accepts SecPage pointer
    ~Demo();

private slots:
    void on_DatabaseUpdate_clicked();
    void on_palagiarismP_clicked();
    void on_back_clicked();

private:
    Ui::Demo *ui;
    Database *_database;
    Palagiarism *palagiarism;
    SecPage *_secPage; // Pointer to SecPage for back navigation
};

#endif // DEMO_H
