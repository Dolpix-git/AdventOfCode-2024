//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWENTYONEPARTTWO_HPP
#define UNTITLED_DAYTWENTYONEPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayTwentyOnePartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayTwentyOnePartTwoRegistered = [] {
    Day::Register("Day21 Part2", []() { return std::make_unique<DayTwentyOnePartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYTWENTYONEPARTTWO_HPP
