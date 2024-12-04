#include <iostream>
#include "Days/Day.h"

int main() {
    const auto& scripts = Day::GetScripts();

    // Display available scripts
    std::cout << "Available scripts:\n";
    for (size_t i = 0; i < scripts.size(); ++i) {
        std::cout << i + 1 << ". " << scripts[i].first << "\n";
    }

    // Prompt user for choice
    int choice;
    std::cout << "Enter the script number to execute:  ";
    std::cin >> choice;

    if (choice <= 0 || choice > static_cast<int>(scripts.size())) {
        std::cerr << "Invalid choice.\n";
        return 1;
    }

    // Create and execute the selected script
    auto script = scripts[choice - 1].second();
    script->Execute();

    return 0;
}
