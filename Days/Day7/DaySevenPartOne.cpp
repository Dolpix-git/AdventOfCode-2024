//
// Created by Dolpix on 12/11/2024.
//

#include <sstream>
#include <iostream>
#include <limits>
#include <queue>
#include "DaySevenPartOne.hpp"

struct Equation
{
	long long target;
	std::vector<long long> values;
};

bool canEvaluateToTarget(const Equation& eq)
{
	if (eq.values.empty())
	{
		return false;
	}

	size_t numOperators = eq.values.size() - 1;
	size_t numCombinations = 1ULL << numOperators;

	for (size_t combination = 0; combination < numCombinations; ++combination)
	{
		long long result = eq.values[0];

		for (size_t i = 0; i < numOperators; ++i)
		{
			bool isAddition = (combination & (1ULL << i)) != 0;

			if (isAddition)
			{
				result += eq.values[i + 1];
			}
			else
			{
				result *= eq.values[i + 1];
			}
		}

		if (result == eq.target)
		{
			return true;
		}
	}

	return false;
}

void DaySevenPartOne::Execute()
{
	std::cout << "Enter equations (type STOP or hit enter on an empty line to end):\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::vector<Equation> equations;
	std::string line;
	while (std::getline(std::cin, line))
	{
		if (line == "STOP" || line.empty())
		{
			break;
		}

		std::size_t colonPos = line.find(':');
		if (colonPos == std::string::npos)
		{
			continue;
		}

		std::string targetStr = line.substr(0, colonPos);
		long long target = std::stoll(targetStr);

		std::string valuesStr = line.substr(colonPos + 1);
		std::istringstream valStream(valuesStr);

		std::vector<long long> values;
		long long num;
		while (valStream >> num)
		{
			values.push_back(num);
		}

		equations.push_back({ target, values });
	}

	long long sum = 0;
	for (auto& equation : equations)
	{
		if (canEvaluateToTarget(equation))
		{
			sum += equation.target;
		}
	}

	std::cout << "Total amount from targets " << sum << std::endl;
}
