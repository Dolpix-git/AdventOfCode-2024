//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWENTYPARTTWO_HPP
#define UNTITLED_DAYTWENTYPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayTwentyPartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayTwentyPartTwoRegistered = [] {
    Day::Register("Day20 Part2", []() { return std::make_unique<DayTwentyPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYTWENTYPARTTWO_HPP
