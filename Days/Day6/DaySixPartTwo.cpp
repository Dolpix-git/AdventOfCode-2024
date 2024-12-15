//
// Created by Dolpix on 12/11/2024.
//

#include <iostream>
#include <chrono>
#include <unordered_set>
#include "DaySixPartTwo.hpp"

struct State
{
	int r, c;
	int dr, dc;
	bool operator==(const State& other) const
	{
		return r == other.r && c == other.c && dr == other.dr && dc == other.dc;
	}
};

struct StateHash
{
	size_t operator()(const State& s) const
	{
		return ((size_t)s.r * 31 + (size_t)s.c) * 31 + (s.dr + 2) * 3 + (s.dc + 2);
	}
};

void DaySixPartTwo::Execute()
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

	auto rows = grid.size();
	auto cols = grid[0].size();

	auto simulate = [&](std::vector<std::vector<char>>& testGrid)
	{
		int x = pos.first, y = pos.second;
		int directionX = dir.first, directionY = dir.second;

		std::unordered_set<State, StateHash> visited;
		visited.insert({ x, y, directionX, directionY });

		while (true)
		{
			int nextX = x + directionX;
			int nextY = y + directionY;

			if (nextX < 0 || nextX >= rows || nextY < 0 || nextY >= cols)
			{
				return false;
			}

			if (testGrid[nextX][nextY] == '#')
			{
				int tmp = directionX;
				directionX = directionY;
				directionY = -tmp;
			}
			else
			{
				x = nextX;
				y = nextY;
			}

			State state = { x, y, directionX, directionY };
			if (visited.find(state) != visited.end())
			{
				return true;
			}
			visited.insert(state);
		}
	};

	// Yes this is just brute forcing .... don't judge
	int count = 0;
	for (int x = 0; x < rows; ++x)
	{
		for (int y = 0; y < cols; ++y)
		{
			if (grid[x][y] == '.' && !(x == pos.first && y == pos.second))
			{
				grid[x][y] = '#';
				bool loops = simulate(grid);
				if (loops)
				{
					count++;
				}
				grid[x][y] = '.';
			}
		}
	}

	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
	std::cout << "Execution time: " << duration.count() << " ms" << std::endl;
	std::cout << count << std::endl;
}
