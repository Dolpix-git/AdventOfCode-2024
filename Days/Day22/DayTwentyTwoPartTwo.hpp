//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWENTYTWOPARTTWO_HPP
#define UNTITLED_DAYTWENTYTWOPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayTwentyTwoPartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayTwentyTwoPartTwoRegistered = [] {
    Day::Register("Day22 Part2", []() { return std::make_unique<DayTwentyTwoPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYTWENTYTWOPARTTWO_HPP
