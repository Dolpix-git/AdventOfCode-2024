//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYEIGHTEENPARTONE_HPP
#define UNTITLED_DAYEIGHTEENPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayEighteenPartOne : public Day {
public:
    void Execute() override;
};

static const bool dayEighteenPartOneRegistered = [] {
    Day::Register("Day18 Part1", []() { return std::make_unique<DayEighteenPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYEIGHTEENPARTONE_HPP
