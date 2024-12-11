//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWENTYTHREEPARTONE_HPP
#define UNTITLED_DAYTWENTYTHREEPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayTwentyThreePartOne : public Day {
public:
    void Execute() override;
};

static const bool dayTwentyThreePartOneRegistered = [] {
    Day::Register("Day23 Part1", []() { return std::make_unique<DayTwentyThreePartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYTWENTYTHREEPARTONE_HPP
