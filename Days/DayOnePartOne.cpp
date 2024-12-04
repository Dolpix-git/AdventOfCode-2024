//
// Created by KieranVelez on 04/12/2024.
//

#include "DayOnePartOne.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

void DayOnePartOne::Execute() {
    std::vector<int> list1;
    std::vector<int> list2;

    std::cout << "Enter all pairs of numbers (type STOP at the end to finnish inputs):\n";

    std::string input;
    std::string line;
    while (std::getline(std::cin, line)) {
        if (line == "STOP") {
            break;
        }
        input += line + "\n";
    }

    std::istringstream stream(input);

    int num1, num2;
    while (stream >> num1 >> num2) {
        list1.push_back(num1);
        list2.push_back(num2);
    }

    sort(list1.begin(), list1.end());
    sort(list2.begin(), list2.end());

    int sum = 0;

    for (int i = 0; i < list1.size(); i++) {
      sum += std::abs(list1.at(i) - list2.at(i));
    }

    std::cout << sum << std::endl;
}
