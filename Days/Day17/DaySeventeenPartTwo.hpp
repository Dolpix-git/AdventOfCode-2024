//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYSEVENTEENPARTTWO_HPP
#define UNTITLED_DAYSEVENTEENPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DaySeventeenPartTwo : public Day {
public:
    void Execute() override;
};

static const bool daySeventeenPartTwoRegistered = [] {
    Day::Register("Day17 Part2", []() { return std::make_unique<DaySeventeenPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYSEVENTEENPARTTWO_HPP
