//
// Created by Dolpix on 12/9/2024.
//

#include "DayTwoPartOne.hpp"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

void DayTwoPartOne::Execute() {
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

        array.push_back(row);
    }

    int safeCount = 0;

    for (const auto& row : array) {
        bool isIncreasing = true;
        bool isDecreasing = true;
        bool isSafe = true;

        for (size_t i = 1; i < row.size(); ++i) {
            int diff = row[i] - row[i - 1];

            if (std::abs(diff) < 1 || std::abs(diff) > 3) {
                isSafe = false;
                break;
            }

            if (diff > 0) {
                isDecreasing = false;
            } else if (diff < 0) {
                isIncreasing = false;
            }
        }

        if (isSafe && (isIncreasing || isDecreasing)) {
            ++safeCount;
        }
    }

    std::cout << "Number of safe reports: " << safeCount-1 << "\n";
}