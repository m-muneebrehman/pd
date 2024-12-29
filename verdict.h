#ifndef VERDICT_H_INCLUDED
#define VERDICT_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <sstream>
#include <limits>
#include "calculations.h"

class Verdict {
public:
    void getVerdict(const std::vector<float>& testScores, std::vector<std::string> matchingRes) {
        if (testScores.size() < 3) {
            throw std::invalid_argument("Insufficient test scores provided.");
        }

        calculations c;
        const std::vector<int> weights = {3, 4, 3};
        const float weightSum = c.sum(weights);

        if (weightSum == 0) {
            throw std::runtime_error("Sum of weights is zero. Cannot calculate final score.");
        }

        // Calculate final score
        const float finalScore = (testScores[0] * weights[0] + testScores[1] * weights[1] + testScores[2] * weights[2]) / weightSum;

        // Calculate the percentage score
        const float percentageScore = (finalScore / 10.0) * 100.0;  // Assuming the final score is out of 10

        // Verdict calculation
        const std::vector<std::pair<float, std::string>> thresholds = {
            {1, "Not plagiarised"},
            {5, "Slightly plagiarised"},
            {8, "Fairly plagiarised"},
            {std::numeric_limits<float>::infinity(), "Highly plagiarised"}
        };

        std::string verdict;
        for (const auto& [scoreThreshold, verdictMessage] : thresholds) {
            if (finalScore < scoreThreshold) {
                verdict = verdictMessage;
                break;
            }
        }

        // Clean up matching results
        matchingRes.erase(std::remove_if(matchingRes.begin(), matchingRes.end(), [](const std::string& str) { return str.empty(); }), matchingRes.end());
        std::sort(matchingRes.begin(), matchingRes.end());
        matchingRes.erase(std::unique(matchingRes.begin(), matchingRes.end()), matchingRes.end());

        // Output results
        std::cout << generateVerdictString(finalScore, percentageScore, verdict, matchingRes);
    }

private:
    std::string generateVerdictString(float finalScore, float percentageScore, const std::string& verdict, const std::vector<std::string>& matchingRes) {
        std::ostringstream oss;
        oss << "********************************************\n";
        oss << "\tFinal score: " << finalScore << "\n";
        oss << "\tPercentage: " << percentageScore << "%" << "\n";
        oss << "\tVerdict: " << verdict << "\n";
        if (verdict != "Not plagiarised") {
            oss << "\tMatch found in:\n";
            if (matchingRes.empty()) {
                oss << "\t-nil-\n";
            } else {
                for (const auto& file : matchingRes) {
                    oss << "\t\t" << file << "\n";
                }
            }
        }
        oss << "********************************************\n";
        return oss.str();
    }
};

#endif // VERDICT_H_INCLUDED
