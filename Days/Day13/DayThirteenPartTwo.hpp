//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTHIRTEENPARTTWO_HPP
#define UNTITLED_DAYTHIRTEENPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayThirteenPartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayThirteenPartTwoRegistered = [] {
    Day::Register("Day13 Part2", []() { return std::make_unique<DayThirteenPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYTHIRTEENPARTTWO_HPP
