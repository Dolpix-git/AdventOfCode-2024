//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWENTYFIVEPARTTWO_HPP
#define UNTITLED_DAYTWENTYFIVEPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayTwentyFivePartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayTwentyFivePartTwoRegistered = [] {
    Day::Register("Day25 Part2", []() { return std::make_unique<DayTwentyFivePartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYTWENTYFIVEPARTTWO_HPP
