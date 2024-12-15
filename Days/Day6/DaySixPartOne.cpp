//
// Created by Dolpix on 12/11/2024.
//

#include <iostream>
#include <limits>
#include <sstream>
#include <thread>
#include "DaySixPartOne.hpp"

void DaySixPartOne::Execute()
{
	std::cout << "Enter map (type STOP to end):\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::vector<std::vector<char>> grid;
	std::string line;
	while (std::getline(std::cin, line))
	{
		if (line == "STOP" || line.empty())
		{
			break;
		}

		grid.emplace_back(line.begin(), line.end());
	}
	auto start = std::chrono::high_resolution_clock::now();

	std::pair<int, int> pos;
	std::pair<int, int> dir = { -1, 0 };
	int distinctPositions = 0;
	int iterations = 0;

	for (int x = 0; x < grid.size(); ++x)
	{
		for (int y = 0; y < grid.size(); ++y)
		{
			if (grid[x][y] == '^')
			{
				pos = { x, y };
				break;
			}
		}
	}

	while (true)
	{
		iterations++;
		if (grid[pos.first][pos.second] != 'X')
		{
			distinctPositions++;
			grid[pos.first][pos.second] = 'X';
		}


		std::pair<int, int> newPosition = { pos.first + dir.first, pos.second + dir.second };

		if (newPosition.first < 0 ||
			newPosition.second < 0 ||
			newPosition.first >= grid.size() ||
			newPosition.second >= grid[0].size())
		{
			break;
		}

		if (grid[newPosition.first][newPosition.second] == '#')
		{
			dir = { dir.second, -dir.first };
		}
		else
		{
			pos = newPosition;
		}
	}
	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
	std::cout << "Execution time: " << duration.count() << " ms" << std::endl;

	std::cout << "Total iterations " << iterations << std::endl;
	std::cout << "Total distinct positions " << distinctPositions << std::endl;
	std::cout << std::endl;
}
