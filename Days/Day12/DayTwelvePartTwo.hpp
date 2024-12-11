//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWELVEPARTTWO_HPP
#define UNTITLED_DAYTWELVEPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayTwelvePartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayTwelvePartTwoRegistered = [] {
    Day::Register("Day12 Part2", []() { return std::make_unique<DayTwelvePartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYTWELVEPARTTWO_HPP
