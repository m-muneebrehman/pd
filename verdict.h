#ifndef VERDICT_H_INCLUDED
#define VERDICT_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include "calculations.h"

class Verdict {
public:
    void getVerdict(const std::vector<float>& testScores, std::vector<std::string> matchingRes) {
        if (testScores.size() < 3) {
            std::cerr << "Error: Insufficient test scores provided." << std::endl;
            return;
        }

        calculations c;
        std::vector<int> weights = {3, 4, 3};

        float weightSum = c.sum(weights);
        if (weightSum == 0) {
            std::cerr << "Error: Sum of weights is zero. Cannot calculate final score." << std::endl;
            return;
        }

        float finalScore = (testScores[0] * weights[0] + testScores[1] * weights[1] + testScores[2] * weights[2]) / weightSum;
        std::string verdict = (finalScore < 1) ? "Not plagiarised" :
                                  (finalScore < 5) ? "Slightly plagiarised" :
                                  (finalScore < 8) ? "Fairly plagiarised" : "Highly plagiarised";

        // Clean up and deduplicate matching results
        matchingRes.erase(std::remove(matchingRes.begin(), matchingRes.end(), ""), matchingRes.end());
        std::sort(matchingRes.begin(), matchingRes.end());
        matchingRes.erase(std::unique(matchingRes.begin(), matchingRes.end()), matchingRes.end());

        // Output results
        std::cout << "********************************************" << std::endl;
        std::cout << "\tFinal score: " << finalScore << std::endl;
        std::cout << "\tVerdict: " << verdict << std::endl;

        if (verdict != "Not plagiarised") {
            std::cout << "\tMatch found in:" << std::endl;
            if (matchingRes.empty()) {
                std::cout << "\t-nil-" << std::endl;
            } else {
                for (const auto& file : matchingRes) {
                    std::cout << "\t\t" << file << std::endl;
                }
            }
        }

        std::cout << "********************************************" << std::endl;
    }
};

#endif // VERDICT_H_INCLUDED
