//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYNINETEENPARTTWO_HPP
#define UNTITLED_DAYNINETEENPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayNineteenPartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayNineteenPartTwoRegistered = [] {
    Day::Register("Day19 Part2", []() { return std::make_unique<DayNineteenPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYNINETEENPARTTWO_HPP
