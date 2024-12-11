//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYSIXTEENPARTTWO_HPP
#define UNTITLED_DAYSIXTEENPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DaySixteenPartTwo : public Day {
public:
    void Execute() override;
};

static const bool daySixteenPartTwoRegistered = [] {
    Day::Register("Day16 Part2", []() { return std::make_unique<DaySixteenPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYSIXTEENPARTTWO_HPP
