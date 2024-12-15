//
// Created by Dolpix on 12/11/2024.
//

#include "DayFivePartTwo.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <limits>
#include <unordered_map>
#include <unordered_set>
#include <queue>

static bool isCorrectlyOrdered(
	const std::vector<int>& update,
	const std::vector<std::pair<int, int>>& rules
)
{
	std::unordered_map<int, int> pos;
	for (int i = 0; i < (int)update.size(); i++)
	{
		pos[update[i]] = i;
	}
	for (auto& r : rules)
	{
		int X = r.first;
		int Y = r.second;
		if (pos.find(X) != pos.end() && pos.find(Y) != pos.end())
		{
			if (pos[X] >= pos[Y])
			{
				return false;
			}
		}
	}
	return true;
}

static std::vector<int> topologicalSort(
	const std::vector<int>& update,
	const std::vector<std::pair<int, int>>& rules
)
{
	std::unordered_set<int> pages(update.begin(), update.end());

	std::unordered_map<int, std::vector<int>> adj;
	std::unordered_map<int, int> inDegree;

	for (auto p : pages)
	{
		inDegree[p] = 0;
	}

	for (auto& r : rules)
	{
		int X = r.first;
		int Y = r.second;
		if (pages.count(X) && pages.count(Y))
		{
			adj[X].push_back(Y);
			inDegree[Y]++;
		}
	}

	std::queue<int> q;
	for (auto& p : inDegree)
	{
		if (p.second == 0)
		{
			q.push(p.first);
		}
	}

	std::vector<int> sortedOrder;
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		sortedOrder.push_back(cur);
		for (auto nxt : adj[cur])
		{
			inDegree[nxt]--;
			if (inDegree[nxt] == 0)
			{
				q.push(nxt);
			}
		}
	}

	return sortedOrder;
}

void DayFivePartTwo::Execute()
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
		if (isCorrectlyOrdered(update, rules))
		{
		}
		else
		{
			auto correctOrder = topologicalSort(update, rules);
			int mid = (int)correctOrder.size() / 2;
			sumOfMiddles += correctOrder[mid];
		}
	}

	std::cout << "Sum of middle pages (incorrect updates reordered): " << sumOfMiddles << "\n";
}
