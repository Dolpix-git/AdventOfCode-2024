//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWENTYTWOPARTONE_HPP
#define UNTITLED_DAYTWENTYTWOPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayTwentyTwoPartOne : public Day {
public:
    void Execute() override;
};

static const bool dayTwentyTwoPartOneRegistered = [] {
    Day::Register("Day22 Part1", []() { return std::make_unique<DayTwentyTwoPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYTWENTYTWOPARTONE_HPP
