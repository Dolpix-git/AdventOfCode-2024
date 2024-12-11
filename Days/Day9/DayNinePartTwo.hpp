//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYNINEPARTTWO_HPP
#define UNTITLED_DAYNINEPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayNinePartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayNinePartTwoRegistered = [] {
    Day::Register("Day9 Part2", []() { return std::make_unique<DayNinePartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYNINEPARTTWO_HPP
