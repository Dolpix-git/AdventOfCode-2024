//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYFIVEPARTTWO_HPP
#define UNTITLED_DAYFIVEPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayFivePartTwo : public Day{
public:
    void Execute() override;
};

static const bool dayFivePartTwoRegistered = [] {
    Day::Register("Day5 Part2", []() { return std::make_unique<DayFivePartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYFIVEPARTTWO_HPP
