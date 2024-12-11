//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYFOURTEENPARTONE_HPP
#define UNTITLED_DAYFOURTEENPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayFourteenPartOne : public Day {
public:
    void Execute() override;
};

static const bool dayFourteenPartOneRegistered = [] {
    Day::Register("Day14 Part1", []() { return std::make_unique<DayFourteenPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYFOURTEENPARTONE_HPP
