//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWENTYTHREEPARTTWO_HPP
#define UNTITLED_DAYTWENTYTHREEPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayTwentyThreePartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayTwentyThreePartTwoRegistered = [] {
    Day::Register("Day23 Part2", []() { return std::make_unique<DayTwentyThreePartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYTWENTYTHREEPARTTWO_HPP
