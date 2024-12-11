//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYSEVENPARTTWO_HPP
#define UNTITLED_DAYSEVENPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DaySevenPartTwo : public Day {
public:
    void Execute() override;
};

static const bool daySevenPartTwoRegistered = [] {
    Day::Register("Day7 Part2", []() { return std::make_unique<DaySevenPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYSEVENPARTTWO_HPP
