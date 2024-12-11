//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYFOURTEENPARTTWO_HPP
#define UNTITLED_DAYFOURTEENPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayFourteenPartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayFourteenPartTwoRegistered = [] {
    Day::Register("Day14 Part2", []() { return std::make_unique<DayFourteenPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYFOURTEENPARTTWO_HPP
