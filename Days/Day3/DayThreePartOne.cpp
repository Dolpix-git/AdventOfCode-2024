//
// Created by Dolpix on 12/11/2024.
//

#include <iostream>
#include <regex>
#include <limits>
#include "DayThreePartOne.hpp"

void DayThreePartOne::Execute() {
    std::string inputLine;

    std::cout << "Enter corrupted memory string:\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string line;
    while (std::getline(std::cin, line)) {
        if (line == "STOP") {
            break;
        }
        inputLine += line + "\n";
    }
    std::cout << "\n";

    std::regex mulRegex(R"(mul\((\d+),(\d+)\))");
    std::smatch match;

    int totalProduct = 0;

    auto searchStart = inputLine.cbegin();
    while (std::regex_search(searchStart, inputLine.cend(), match, mulRegex)) {
        int num1 = std::stoi(match[1].str());
        int num2 = std::stoi(match[2].str());

        int product = num1 * num2;
        totalProduct += product;
        std::cout << totalProduct << std::endl;
        std::cout << "Found: " << match[0] << " => " << num1 << " * " << num2 << " = " << product << "\n";

        searchStart = match.suffix().first;
    }

    std::cout << "Total Product: " << totalProduct << "\n";
}
