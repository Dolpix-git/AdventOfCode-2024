//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTHREEPARTTWO_HPP
#define UNTITLED_DAYTHREEPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayThreePartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayThreePartTwoRegistered = [] {
    Day::Register("Day3 Part2", []() { return std::make_unique<DayThreePartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYTHREEPARTTWO_HPP
