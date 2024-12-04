//
// Created by KieranVelez on 04/12/2024.
//

#include "Day.h"

std::vector<std::pair<std::string, std::function<std::unique_ptr<Day>()>>> Day::registry;

void Day::Register(const std::string& name, const std::function<std::unique_ptr<Day>()>& creator) {
    registry.emplace_back(name, creator);
}

const std::vector<std::pair<std::string, std::function<std::unique_ptr<Day>()>>>& Day::GetScripts() {
    return registry;
}