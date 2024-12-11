//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWENTYONEPARTONE_HPP
#define UNTITLED_DAYTWENTYONEPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayTwentyOnePartOne : public Day {
public:
    void Execute() override;
};

static const bool dayTwentyOnePartOneRegistered = [] {
    Day::Register("Day21 Part1", []() { return std::make_unique<DayTwentyOnePartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYTWENTYONEPARTONE_HPP
