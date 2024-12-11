//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYELEVENPARTTWO_HPP
#define UNTITLED_DAYELEVENPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayElevenPartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayElevenPartTwoRegistered = [] {
    Day::Register("Day11 Part2", []() { return std::make_unique<DayElevenPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYELEVENPARTTWO_HPP
