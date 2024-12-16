//
// Created by Dolpix on 12/11/2024.
//

#include <sstream>
#include <iostream>
#include <limits>
#include <queue>
#include <valarray>
#include "DaySevenPartTwo.hpp"

struct Equation
{
	long long target;
	std::vector<long long> values;
};

bool canEvaluateToTargetTwo(const Equation& eq)
{
	if (eq.values.empty())
	{
		return false;
	}

	size_t numOperators = eq.values.size() - 1;
	size_t numCombinations = static_cast<size_t>(std::pow(3, numOperators));

	auto concatenate = [](long long left, long long right) -> long long {
		long long factor = std::pow(10, static_cast<int>(std::log10(right) + 1));
		return left * factor + right;
	};

	for (size_t combination = 0; combination < numCombinations; ++combination)
	{
		long long result = eq.values[0];
		size_t opCode = combination;

		for (size_t i = 0; i < numOperators; ++i)
		{
			int operation = opCode % 3;
			opCode /= 3;

			if (operation == 0)
			{
				result += eq.values[i + 1];
			}
			else if (operation == 1)
			{
				result *= eq.values[i + 1];
			}
			else if (operation == 2)
			{
				result = concatenate(result, eq.values[i + 1]);
			}
		}

		if (result == eq.target)
		{
			return true;
		}
	}

	return false;
}

void DaySevenPartTwo::Execute()
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
		if (canEvaluateToTargetTwo(equation))
		{
			sum += equation.target;
		}
	}

	std::cout << "Total amount from targets " << sum << std::endl;
}