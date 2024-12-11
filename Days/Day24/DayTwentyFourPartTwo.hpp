//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWENTYFOURPARTTWO_HPP
#define UNTITLED_DAYTWENTYFOURPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayTwentyFourPartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayTwentyFourPartTwoRegistered = [] {
    Day::Register("Day24 Part2", []() { return std::make_unique<DayTwentyFourPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYTWENTYFOURPARTTWO_HPP
