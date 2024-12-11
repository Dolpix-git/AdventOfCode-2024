//
// Created by Dolpix on 12/11/2024.
//

#include "DayFourPartOne.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <limits>

void DayFourPartOne::Execute() {
    std::vector<std::string> grid;

    std::cout << "Enter grid (type STOP at the end to finnish inputs):\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string line;
    while (std::getline(std::cin, line)) {
        if (line == "STOP") {
            break;
        }
        grid.push_back(line);
    }
    std::cout << "\n";


    std::string word = "XMAS";
    int wordCount = 0;

    std::vector<std::pair<int, int>> directions = {
            {0,  1},
            {0,  -1},
            {1,  0},
            {-1, 0},
            {1,  1},
            {1,  -1},
            {-1, 1},
            {-1, -1}
    };

    auto rows = grid.size();
    auto cols = grid[0].size();

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            for (const auto &dir: directions) {
                if (SearchWord(grid, row, col, dir.first, dir.second, word)) {
                    wordCount++;
                }
            }
        }
    }

    std::cout << "Total occurrences of XMAS: " << wordCount << std::endl;
}

bool DayFourPartOne::SearchWord(
        const std::vector<std::string> &grid,
        int row,
        int col,
        int dirRow,
        int dirCol,
        const std::string &word) {
    auto rows = grid.size();
    auto cols = grid[0].size();

    for (int i = 0; i < word.length(); i++) {
        int newRow = row + i * dirRow;
        int newCol = col + i * dirCol;

        if (newRow < 0 || newRow >= rows || newCol < 0 || newCol >= cols || grid[newRow][newCol] != word[i]) {
            return false;
        }
    }

    return true;
}
