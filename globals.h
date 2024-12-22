#ifndef GLOBALS_H
#define GLOBALS_H

class globals{
public:

    char const * database = "database";
    char const * target_folder = "target";
    char const * stopwords_file = "ignore_words.txt";
    int score_accuracy;
    int number_of_tests=3;
};

#endif // GLOBALS_H
