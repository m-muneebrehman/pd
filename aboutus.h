#pragma once
#ifndef ABOUTUS_H
#define ABOUTUS_H

#include <QDialog>

class SecPage; // Forward declaration

namespace Ui {
class aboutUs;
}

class aboutUs : public QDialog
{
    Q_OBJECT

public:
    explicit aboutUs(SecPage *secPage, QWidget *parent = nullptr); // Constructor accepts SecPage pointer
    ~aboutUs();

private slots:
    void on_back_clicked(); // Back button functionality

private:
    Ui::aboutUs *ui;
    SecPage *_secPage; // Pointer to SecPage for navigation
};

#endif // ABOUTUS_H
