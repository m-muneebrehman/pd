#pragma once
#ifndef RESULT_H
#define RESULT_H

#include <QDialog>
#include <vector>
#include <string>
#include "globals.h" // Include the globals header

class Palagiarism; // Forward Declaration

namespace Ui {
class Result;
}

class Result : public QDialog
{
    Q_OBJECT

public:
    explicit Result(Palagiarism *palagarism, QWidget *parent = nullptr);
    ~Result();

    // New method to run the logic
    void runPlagiarismCheck();

private slots:
    void on_back_clicked();

private:
    Ui::Result *ui;

    // Helper methods for processing
    void processTargetFile(const std::string &targetFile);
    void displayResults(const std::string& targetFile, const std::vector<float>& scores, const std::vector<std::string>& matches);  // Updated signature
    void moveFileToDatabase(const std::string &filePath);
    void displayEmptyFileResult(const std::string &filePath);

    // Globals instance
    globals mGlobals;

    Palagiarism *_palagarism;
};

#endif // RESULT_H
