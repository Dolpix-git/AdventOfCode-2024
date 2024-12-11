//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYFIFTEENPARTTWO_HPP
#define UNTITLED_DAYFIFTEENPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayFifteenPartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayFifteenPartTwoRegistered = [] {
    Day::Register("Day15 Part2", []() { return std::make_unique<DayFifteenPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYFIFTEENPARTTWO_HPP
