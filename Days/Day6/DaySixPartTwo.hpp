//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYSIXPARTTWO_HPP
#define UNTITLED_DAYSIXPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DaySixPartTwo : public Day {
public:
    void Execute() override;
};

static const bool daySixPartTwoRegistered = [] {
    Day::Register("Day6 Part2", []() { return std::make_unique<DaySixPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYSIXPARTTWO_HPP
