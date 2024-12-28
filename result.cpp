#include "result.h"
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
                processTargetFile(targetFile);
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

    string target = sP.getFileData(targetFile);

    if ((dirB = opendir(mGlobals.database)) != NULL)
    {
        while ((dir_object = readdir(dirB)) != NULL)
        {
            if (sP.extCheck((string)dir_object->d_name, ".txt"))
            {
                string baseFile = string(mGlobals.database) + "/" + dir_object->d_name;
                string base = sP.getFileData(baseFile);

                auto databaseTokens = tok.stringToToken(base);
                auto targetTokens = tok.stringToToken(target);

                // Run plagiarism tests and collect scores
                float temp;

                temp = tst.tokenizeTest(databaseTokens, targetTokens, mGlobals.stopwords_file);
                if (scores[0] < temp)
                {
                    scores[0] = temp;
                    matches.push_back(dir_object->d_name);
                }

                temp = tst.ngramTest(databaseTokens, targetTokens);
                if (scores[1] < temp)
                {
                    scores[1] = temp;
                    matches.push_back(dir_object->d_name);
                }

                temp = tst.cosineTest(databaseTokens, targetTokens, mGlobals.stopwords_file);
                if (scores[2] < temp)
                {
                    scores[2] = temp;
                    matches.push_back(dir_object->d_name);
                }
            }
        }
        closedir(dirB);
    }

    displayResults(scores, matches);
}

void Result::displayResults(const std::vector<float> &scores, const std::vector<std::string> &matches)
{
    calculations c;
    vector<int> weights(scores.size(), 0);

    // Define weights for tests
    weights[0] = 3; // Weight for first test
    weights[1] = 4; // Weight for second test
    weights[2] = 3; // Weight for third test

    // Calculate the final score
    float finalScore = (scores[0] * weights[0] + scores[1] * weights[1] + scores[2] * weights[2]) / c.sum(weights);

    // Determine verdict
    string verdict;
    if (finalScore < 1)
        verdict = "Not plagiarised";
    else if (finalScore < 5)
        verdict = "Slightly plagiarised";
    else if (finalScore < 8)
        verdict = "Fairly plagiarised";
    else
        verdict = "Highly plagiarised";

    // Deduplicate matching results
    vector<string> uniqueMatches = matches;
    uniqueMatches.erase(remove(uniqueMatches.begin(), uniqueMatches.end(), ""), uniqueMatches.end());
    sort(uniqueMatches.begin(), uniqueMatches.end());
    uniqueMatches.erase(unique(uniqueMatches.begin(), uniqueMatches.end()), uniqueMatches.end());

    // Terminal Output
    cout << "********************************************" << endl;
    cout << "\tFinal score: " << finalScore << endl;
    cout << "\tVerdict: " << verdict << endl;
    if (verdict != "Not plagiarised") {
        cout << "\tMatch found in:" << endl;
        if (uniqueMatches.empty())
            cout << "\t-nil-" << endl;
        else {
            for (const auto &file : uniqueMatches)
                cout << "\t\t" << file << endl;
        }
    }
    cout << "********************************************" << endl;

    // GUI Output
    QString resultText = QString("********************************************\n"
                                 "\tFinal score: %1\n"
                                 "\tVerdict: %2\n")
                             .arg(QString::number(finalScore, 'f', 2))
                             .arg(QString::fromStdString(verdict));

    if (verdict != "Not plagiarised") {
        resultText += "\tMatch found in:\n";
        if (uniqueMatches.empty())
            resultText += "\t-nil-\n";
        else {
            for (const auto &file : uniqueMatches)
                resultText += QString("\t\t%1\n").arg(QString::fromStdString(file));
        }
    }

    resultText += "********************************************";

    // Update QLabel on GUI
    ui->result->setText(resultText);
}

void Result::on_back_clicked()
{
    _palagarism->show();
    this->hide();
}
