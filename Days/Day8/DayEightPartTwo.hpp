//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYEIGHTPARTTWO_HPP
#define UNTITLED_DAYEIGHTPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayEightPartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayEightPartTwoRegistered = [] {
    Day::Register("Day8 Part2", []() { return std::make_unique<DayEightPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYEIGHTPARTTWO_HPP
