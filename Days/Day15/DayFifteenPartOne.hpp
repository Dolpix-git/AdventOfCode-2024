//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYFIFTEENPARTONE_HPP
#define UNTITLED_DAYFIFTEENPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayFifteenPartOne : public Day {
public:
    void Execute() override;
};

static const bool dayFifteenPartOneRegistered = [] {
    Day::Register("Day15 Part1", []() { return std::make_unique<DayFifteenPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYFIFTEENPARTONE_HPP
