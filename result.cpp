#include "ui_result.h"
#include <dirent.h>
#include <iomanip>
#include <iostream>
#include <windows.h>
#include "verdict.h"
#include "tests.h"
#include "stringOperations.h"
#include "tokenization.h"
#include "palagiarism.h"
#include <QFile>
#include <QFileInfo>
#include <QMessageBox>

using namespace std;

/****Objects****/
Tokenization tok;
tests tst;
Verdict v;
StringOperations sP;

Result::Result(Palagiarism *palagarism, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Result)
    , _palagarism(palagarism)
{
    ui->setupUi(this);

    // Run plagiarism check as soon as the dialog opens
    runPlagiarismCheck();
}

Result::~Result()
{
    delete ui;
}

void Result::runPlagiarismCheck()
{
    DIR *dir; // For target directory
    struct dirent *dir_object;

    if ((dir = opendir(mGlobals.target_folder)) != NULL)
    {
        while ((dir_object = readdir(dir)) != NULL)
        {
            if (sP.extCheck((string)dir_object->d_name, ".txt"))
            {
                string targetFile = string(mGlobals.target_folder) + "/" + dir_object->d_name;

                try {
                    // Check if the file is empty or too small
                    string fileContent = sP.getFileData(targetFile);
                    if (fileContent.empty() || fileContent.size() < 6)
                    {
                        cout << "Skipping empty or insufficient data file: " << dir_object->d_name << endl;
                        continue;
                    }

                    processTargetFile(targetFile);
                } catch (const exception &e) {
                    cerr << "Error processing file " << dir_object->d_name << ": " << e.what() << endl;
                    continue;
                }
            }
        }
        closedir(dir);
    }
    else
    {
        perror("No Target Folder");
    }
}

void Result::processTargetFile(const std::string &targetFile)
{
    DIR *dirB;
    struct dirent *dir_object;
    vector<float> scores(mGlobals.number_of_tests, 0.0);
    vector<string> matches;

    string target;
    try {
        target = sP.getFileData(targetFile);
    } catch (const exception &e) {
        cerr << "Failed to read target file: " << targetFile << ". Error: " << e.what() << endl;
        return;
    }

    if ((dirB = opendir(mGlobals.database)) != NULL)
    {
        while ((dir_object = readdir(dirB)) != NULL)
        {
            if (sP.extCheck((string)dir_object->d_name, ".txt"))
            {
                string baseFile = string(mGlobals.database) + "/" + dir_object->d_name;
                string base;
                try {
                    base = sP.getFileData(baseFile);
                } catch (const exception &e) {
                    cerr << "Failed to read base file: " << baseFile << ". Error: " << e.what() << endl;
                    continue;
                }

                auto databaseTokens = tok.stringToToken(base);
                auto targetTokens = tok.stringToToken(target);

                try {
                    // Run plagiarism tests and collect scores
                    float temp;

                    temp = tst.tokenizeTest(databaseTokens, targetTokens, mGlobals.stopwords_file);
                    scores[0] = max(scores[0], temp);
                    matches.push_back(dir_object->d_name);

                    temp = tst.ngramTest(databaseTokens, targetTokens);
                    scores[1] = max(scores[1], temp);
                    matches.push_back(dir_object->d_name);

                    temp = tst.cosineTest(databaseTokens, targetTokens, mGlobals.stopwords_file);
                    scores[2] = max(scores[2], temp);
                    matches.push_back(dir_object->d_name);
                } catch (const exception &e) {
                    cerr << "Error during plagiarism test for file: " << baseFile << ". Error: " << e.what() << endl;
                    continue;
                }
            }
        }
        closedir(dirB);
    }

    displayResults(targetFile, scores, matches);
    moveFileToDatabase(targetFile);  // Move file after processing
}

void Result::moveFileToDatabase(const std::string &filePath)
{
    QString targetFilePath = QString::fromStdString(filePath);
    QString databaseFilePath = QString::fromStdString(mGlobals.database) + "/" + QFileInfo(targetFilePath).fileName();

    QFile targetFile(targetFilePath);
    QFile databaseFile(databaseFilePath);

    if (targetFile.rename(targetFilePath, databaseFilePath)) {
        QMessageBox::information(this, "File Moved", "File has been moved to the database folder.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to move the file to the database folder.");
    }
}

void Result::displayResults(const std::string &targetFile, const std::vector<float> &scores, const std::vector<std::string> &matches)
{
    calculations c;
    vector<int> weights = {3, 4, 3};

    // Calculate the final score
    float finalScore = (scores[0] * weights[0] + scores[1] * weights[1] + scores[2] * weights[2]) / c.sum(weights);
    float percentageScore = (finalScore / 10.0) * 100.0; // Assuming score is out of 10

    // Deduplicate and organize matching results
    vector<string> uniqueMatches = matches;
    uniqueMatches.erase(remove(uniqueMatches.begin(), uniqueMatches.end(), ""), uniqueMatches.end());
    sort(uniqueMatches.begin(), uniqueMatches.end());
    uniqueMatches.erase(unique(uniqueMatches.begin(), uniqueMatches.end()), uniqueMatches.end());

    // Generate detailed match information
    stringstream matchDetails;
    for (const auto &file : uniqueMatches) {
        matchDetails << "\t- " << file << " (Tokenization: " << scores[0]
                     << ", N-gram: " << scores[1] << ", Cosine: " << scores[2] << ")\n";
    }

    // Output results to console
    cout << "********************************************\n"
         << "\tFinal Score: " << fixed << setprecision(2) << finalScore << "\n"
         << "\tPercentage: " << fixed << setprecision(2) << percentageScore << "%\n"
         << "\tVerdict: " << (finalScore < 1 ? "Not plagiarised" : finalScore < 5 ? "Slightly plagiarised"
                                                               : finalScore < 8 ? "Fairly plagiarised"
                                                                                  : "Highly plagiarised")
         << "\n\tMatched Files:\n"
         << (uniqueMatches.empty() ? "\t-nil-\n" : matchDetails.str())
         << "********************************************\n";

    // GUI Output
    QString resultText = QString("********************************************\n"
                                 "\tFinal Score: %1\n"
                                 "\tPercentage: %2\n"
                                 "\tVerdict: %3\n"
                                 "\tMatched Files:\n%4"
                                 "********************************************")
                             .arg(QString::number(finalScore, 'f', 2))
                             .arg(QString::number(percentageScore, 'f', 2))
                             .arg(QString::fromStdString(finalScore < 1 ? "Not plagiarised" : finalScore < 5 ? "Slightly plagiarised"
                                                                                          : finalScore < 8 ? "Fairly plagiarised"
                                                                                                             : "Highly plagiarised"))
                             .arg(uniqueMatches.empty() ? "\t-nil-\n" : QString::fromStdString(matchDetails.str()));

    ui->result->setText(resultText);
}

void Result::on_back_clicked()
{
    _palagarism->show();
    Sleep(50);
    this->hide();
}
