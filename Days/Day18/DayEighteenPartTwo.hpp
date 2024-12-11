//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYEIGHTEENPARTTWO_HPP
#define UNTITLED_DAYEIGHTEENPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayEighteenPartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayEighteenPartTwoRegistered = [] {
    Day::Register("Day18 Part2", []() { return std::make_unique<DayEighteenPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYEIGHTEENPARTTWO_HPP
