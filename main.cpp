#include <iostream>
#include <string>
#include "Days/Day.h"

int main() {
	const auto& scripts = Day::GetScripts();

	std::cout << "Available scripts:\n";
	for (size_t i = 0; i < scripts.size(); ++i) {
		std::cout << i + 1 << ". " << scripts[i].first << "\n";
	}

	while (true) {
		std::string input;
		std::cout << "Enter the script number to execute or type STOP to exit: ";
		std::cin >> input;

		for (auto& c : input) c = toupper(c);

		if (input == "STOP") {
			std::cout << "Exiting program.\n";
			break;
		}

		int choice;
		try {
			choice = std::stoi(input);
		} catch (const std::invalid_argument&) {
			std::cerr << "Invalid input. Please enter a number or type STOP to exit.\n";
			continue;
		}

		if (choice <= 0 || choice > static_cast<int>(scripts.size())) {
			std::cerr << "Invalid choice. Please select a valid script number.\n";
			continue;
		}

		auto script = scripts[choice - 1].second();
		script->Execute();
	}

	return 0;
}