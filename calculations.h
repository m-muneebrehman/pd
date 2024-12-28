#pragma once
#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#include <cmath>
#include <map>
#include <iomanip>
#include <vector>
using namespace std;

class calculations{
public:
    // Calculate the dot product of two vectors
    float dot_product(vector<int> ix, vector<int> iy) {
        float sum = 0;
        for (int i = 0; i < ix.size(); i++)
            sum += ix[i] * iy[i];
        return sum;
    }

    // Calculate the sum of elements in a vector
    float sum(vector<int> v) {
        float sumv = 0;
        for (auto& n : v)
            sumv += n;
        return sumv;
    }

    // Get a multiplier based on the length of the word
    float get_multiplier(string word) {
        return word.length() * word.length();
    }

    // Get the frequency of each token in a vector of strings
    map<string, int> getFrequency(vector<string> tokens) {
        map<string, int> freqs;
        for (auto const& x : tokens)
            ++freqs[x];
        vector<string> unique_tokens;
        vector<int> freq_token;
        for (auto const& p : freqs) {
            unique_tokens.push_back(p.first);
            freq_token.push_back(p.second);
        }

        return freqs;
    }
};

#endif // CALCULATIONS_H
