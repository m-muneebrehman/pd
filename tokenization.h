#ifndef TOKENIZATION_H
#define TOKENIZATION_H

#include<iterator>
#include<vector>
#include<sstream>

using namespace std;

class Tokenization {
public:
    // tokenization
    vector<string> stringToToken(string inpString) {
        if (inpString.empty()) {
            return {};
        }
        istringstream dStream(inpString);
        return vector<string>(istream_iterator<string>{dStream}, istream_iterator<string>{});
    }
};

#endif // TOKENIZATION_H
