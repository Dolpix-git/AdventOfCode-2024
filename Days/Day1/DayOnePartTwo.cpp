//
// Created by KieranVelez on 04/12/2024.
//

#include "DayOnePartTwo.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>


void DayOnePartTwo::Execute() {
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

    for (const int i : list1) {
        int count = 0;
        for (const int j : list2) {
            if (i == j) {
                count++;
            }
        }

        sum += i * count;
    }

    std::cout << sum << std::endl;
}
