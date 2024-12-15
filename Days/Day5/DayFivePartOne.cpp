//
// Created by Dolpix on 12/11/2024.
//

#include <iostream>
#include <limits>
#include <sstream>
#include "DayFivePartOne.hpp"

void DayFivePartOne::Execute()
{
	std::cout << "Enter ordering rules, one per line (type STOP to end):\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::vector<std::pair<int, int>> rules;
	{
		std::string line;
		while (std::getline(std::cin, line))
		{
			if (line == "STOP" || line.empty())
			{
				break;
			}

			auto pos = line.find('|');
			if (pos != std::string::npos)
			{
				int X = std::stoi(line.substr(0, pos));
				int Y = std::stoi(line.substr(pos + 1));
				rules.emplace_back(X, Y);
			}
		}
	}

	std::cout << "Enter updates, one per line (type STOP to end):\n";
	std::vector<std::vector<int>> updates;
	{
		std::string line;
		while (std::getline(std::cin, line))
		{
			if (line == "STOP")
			{
				break;
			}
			if (line.empty())
			{
				continue;
			}
			std::vector<int> update;
			{
				std::stringstream ss(line);
				std::string num;
				while (std::getline(ss, num, ','))
				{
					if (!num.empty())
					{
						update.push_back(std::stoi(num));
					}
				}
			}
			if (!update.empty())
			{
				updates.push_back(update);
			}
		}
	}

	int sumOfMiddles = 0;

	for (auto& update : updates)
	{
		std::unordered_map<int, int> pos;
		for (int i = 0; i < (int)update.size(); i++)
		{
			pos[update[i]] = i;
		}

		bool valid = true;
		for (auto& r : rules)
		{
			int X = r.first;
			int Y = r.second;

			if (pos.find(X) != pos.end() && pos.find(Y) != pos.end())
			{
				if (pos[X] >= pos[Y])
				{
					valid = false;
					break;
				}
			}
		}

		if (valid)
		{
			int middleIndex = (int)update.size() / 2;
			sumOfMiddles += update[middleIndex];
		}
	}

	std::cout << "Sum of middle pages: " << sumOfMiddles << "\n";
}
