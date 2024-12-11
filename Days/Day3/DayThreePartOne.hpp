//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTHREEPARTONE_HPP
#define UNTITLED_DAYTHREEPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayThreePartOne : public Day {
public:
    void Execute() override;
};

static const bool dayThreePartOneRegistered = [] {
    Day::Register("Day3 Part1", []() { return std::make_unique<DayThreePartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYTHREEPARTONE_HPP
