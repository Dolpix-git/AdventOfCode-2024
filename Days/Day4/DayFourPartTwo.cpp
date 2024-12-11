//
// Created by Dolpix on 12/11/2024.
//
#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include "DayFourPartTwo.hpp"

void DayFourPartTwo::Execute()
{
	std::vector<std::string> grid;

	std::cout << "Enter grid (type STOP at the end to finnish inputs):\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::string line;
	while (std::getline(std::cin, line))
	{
		if (line == "STOP")
		{
			break;
		}
		grid.push_back(line);
	}
	std::cout << "\n";

	for (const auto& str : grid)
	{
		std::cout << str << std::endl;
	}

	int xmasCount = 0;

	auto rows = grid.size();
	auto cols = grid[0].size();

	std::cout << "Total X-MAS rows: " << rows << std::endl;
	std::cout << "Total X-MAS cols: " << cols << std::endl;

	for (int row = 0; row <= rows; row++)
	{
		for (int col = 0; col <= cols; col++)
		{
			xmasCount += IsXmas(grid, row, col);
		}
	}

	std::cout << "Total X-MAS patterns: " << xmasCount << std::endl;
}

bool DayFourPartTwo::IsXmas(const std::vector<std::string>& grid, int row, int col)
{
	auto rows = grid.size();
	auto cols = grid[0].size();

	if (row - 1 < 0 || row + 1 >= rows || col - 1 < 0 || col + 1 >= cols)
	{
		return false;
	}

	bool topLeftToBottomRight = (
		grid[row - 1][col - 1] == 'M' &&
		grid[row][col] == 'A' &&
		grid[row + 1][col + 1] == 'S'
	);
	bool bottomLeftToTopRight = (
		grid[row + 1][col - 1] == 'M' &&
		grid[row][col] == 'A' &&
		grid[row - 1][col + 1] == 'S'
	);

	bool topLeftToBottomRightReversed = (
		grid[row - 1][col - 1] == 'S' &&
		grid[row][col] == 'A' &&
		grid[row + 1][col + 1] == 'M'
	);
	bool bottomLeftToTopRightReversed = (
		grid[row + 1][col - 1] == 'S' &&
		grid[row][col] == 'A' &&
		grid[row - 1][col + 1] == 'M'
	);

	return (
			   topLeftToBottomRight +
			   bottomLeftToTopRight +
			   topLeftToBottomRightReversed +
			   bottomLeftToTopRightReversed
		   ) >= 2;
}
void DayFourPartTwo::logGrid(const std::vector<std::string>& grid, int row, int col)
{
	std::cout << "3x3 Grid:\n";
	for (int i = row - 1; i <= row + 1; ++i)
	{
		for (int j = col - 1; j <= col + 1; ++j)
		{
			if (i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size())
			{
				std::cout << grid[i][j] << " ";
			}
			else
			{
				std::cout << ". ";
			}
		}
		std::cout << "\n";
	}
}
