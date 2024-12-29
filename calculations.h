#pragma once
#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#include <vector>
#include <map>
#include <string>
#include <stdexcept> // For exception handling

using namespace std;

class calculations {
public:
    // Calculate the dot product of two vectors
    float dot_product(const vector<int>& ix, const vector<int>& iy) {
        if (ix.size() != iy.size()) {
            throw invalid_argument("Vectors must have the same size for dot product");
        }

        float sum = 0;
        for (size_t i = 0; i < ix.size(); ++i) {
            sum += ix[i] * iy[i];
        }
        return sum;
    }

    // Calculate the sum of elements in a vector
    float sum(const vector<int>& v) {
        float sumv = 0;
        for (const auto& n : v) {
            sumv += n;
        }
        return sumv;
    }

    // Get a multiplier based on the length of the word
    float get_multiplier(const string& word) {
        return static_cast<float>(word.length() * word.length());
    }

    // Get the frequency of each token in a vector of strings
    map<string, int> getFrequency(const vector<string>& tokens) {
        map<string, int> freqs;
        for (const auto& token : tokens) {
            ++freqs[token];
        }
        return freqs;
    }
};

#endif // CALCULATIONS_H
