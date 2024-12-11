//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWENTYPARTONE_HPP
#define UNTITLED_DAYTWENTYPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayTwentyPartOne : public Day {
public:
    void Execute() override;
};

static const bool dayTwentyPartOneRegistered = [] {
    Day::Register("Day20 Part1", []() { return std::make_unique<DayTwentyPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYTWENTYPARTONE_HPP
