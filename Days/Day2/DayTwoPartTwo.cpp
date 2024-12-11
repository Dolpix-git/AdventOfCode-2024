//
// Created by Dolpix on 12/9/2024.
//

#include "DayTwoPartTwo.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

bool DayTwoPartTwo::IsSafeReport(const std::vector<int>& report) {
    if (report.size() < 2) {
        return true;
    }

    bool isIncreasing = true;
    bool isDecreasing = true;

    for (size_t i = 1; i < report.size(); ++i) {
        int diff = report[i] - report[i - 1];

        if (std::abs(diff) < 1 || std::abs(diff) > 3) {
            return false;
        }

        if (diff > 0) {
            isDecreasing = false;
        } else if (diff < 0) {
            isIncreasing = false;
        }
    }

    return (isIncreasing || isDecreasing);
}

void DayTwoPartTwo::Execute() {
    std::vector<std::vector<int>> array;
    std::string line;

    std::cout << "Enter rows of numbers (type STOP to finish):\n";

    while (std::getline(std::cin, line)) {
        if (line == "STOP") {
            break;
        }

        std::stringstream stringStream(line);
        std::vector<int> row;
        int num;
        while (stringStream >> num) {
            row.push_back(num);
        }

        if (!row.empty()) {
            array.push_back(row);
        }
    }

    int safeCount = 0;

    for (auto& row : array) {
        if (IsSafeReport(row)) {
            ++safeCount;
            continue;
        }

        bool canBeSafe = false;
        for (size_t i = 0; i < row.size(); ++i) {
            std::vector<int> modified = row;
            modified.erase(modified.begin() + i);

            if (IsSafeReport(modified)) {
                canBeSafe = true;
                break;
            }
        }

        if (canBeSafe) {
            ++safeCount;
        }
    }

    std::cout << "Number of safe reports: " << safeCount << "\n";
}