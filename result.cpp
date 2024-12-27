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
    vector<string> matches(mGlobals.number_of_tests, "");

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

                float temp;
                temp = tst.tokenizeTest(databaseTokens, targetTokens, mGlobals.stopwords_file);
                if (scores[0] < temp)
                {
                    scores[0] = temp;
                    matches[0] = dir_object->d_name;
                }

                temp = tst.ngramTest(databaseTokens, targetTokens);
                if (scores[1] < temp)
                {
                    scores[1] = temp;
                    matches[1] = dir_object->d_name;
                }

                temp = tst.cosineTest(databaseTokens, targetTokens, mGlobals.stopwords_file);
                if (scores[2] < temp)
                {
                    scores[2] = temp;
                    matches[2] = dir_object->d_name;
                }
            }
        }
        closedir(dirB);
    }

    displayResults(scores, matches);
}

void Result::displayResults(const std::vector<float> &scores, const std::vector<std::string> &matches)
{
    for (size_t i = 0; i < scores.size(); ++i)
    {
        cout << "Test " << (i + 1) << " score: " << fixed << setprecision(mGlobals.score_accuracy) << scores[i] << "/10" << endl;
    }

    v.getVerdict(scores, matches);
}

void Result::on_back_clicked()
{
    _palagarism->show();
    Sleep(500);
    this->hide();
}

