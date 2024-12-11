//
// Created by Dolpix on 12/11/2024.
//

#include <iostream>
#include <regex>
#include <string>
#include <limits>
#include "DayThreePartTwo.hpp"

void DayThreePartTwo::Execute() {
    std::string inputLine;

    std::cout << "Enter corrupted memory string (type STOP to finish):\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string line;
    while (std::getline(std::cin, line)) {
        if (line == "STOP") {
            break;
        }
        inputLine += line + "\n";
    }
    std::cout << "\n";

    std::regex instructionRegex(R"(mul\((\d+),(\d+)\)|do\(\)|don't\(\))");
    std::smatch match;

    int totalProduct = 0;
    bool isMulEnabled = true;

    auto searchStart = inputLine.cbegin();
    while (std::regex_search(searchStart, inputLine.cend(), match, instructionRegex)) {
        if (match[0].str() == "do()") {
            isMulEnabled = true;  // Enable mul instructions
            std::cout << "do() encountered: Enabling mul instructions\n";
        } else if (match[0].str() == "don't()") {
            isMulEnabled = false;  // Disable mul instructions
            std::cout << "don't() encountered: Disabling mul instructions\n";
        } else if (match[1].matched && match[2].matched) {
            if (isMulEnabled) {
                int num1 = std::stoi(match[1].str());
                int num2 = std::stoi(match[2].str());

                int product = num1 * num2;
                totalProduct += product;

                std::cout << "Found: " << match[0] << " => " << num1 << " * " << num2 << " = " << product << "\n";
            } else {
                std::cout << "Found (disabled): " << match[0] << "\n";
            }
        }

        searchStart = match.suffix().first;
    }

    std::cout << "Total Product: " << totalProduct << "\n";
}
