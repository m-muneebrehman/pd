#pragma once
#ifndef ABOUTPROJ_H
#define ABOUTPROJ_H

#include <QDialog>

class SecPage; // Forward declaration

namespace Ui {
class AboutProj;
}

class AboutProj : public QDialog
{
    Q_OBJECT

public:
    explicit AboutProj(SecPage *secPage, QWidget *parent = nullptr); // Constructor accepts SecPage pointer
    ~AboutProj();

private slots:
    void on_back_clicked(); // Back button functionality

private:
    Ui::AboutProj *ui;
    SecPage *_secPage; // Pointer to SecPage for navigation
};

#endif // ABOUTPROJ_H
