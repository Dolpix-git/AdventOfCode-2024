//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWENTYFIVEPARTONE_HPP
#define UNTITLED_DAYTWENTYFIVEPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayTwentyFivePartOne : public Day {
public:
    void Execute() override;
};

static const bool dayTwentyFivePartOneRegistered = [] {
    Day::Register("Day25 Part1", []() { return std::make_unique<DayTwentyFivePartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYTWENTYFIVEPARTONE_HPP
