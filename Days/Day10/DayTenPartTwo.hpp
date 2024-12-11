//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTENPARTTWO_HPP
#define UNTITLED_DAYTENPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayTenPartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayTenPartTwoRegistered = [] {
    Day::Register("Day10 Part2", []() { return std::make_unique<DayTenPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYTENPARTTWO_HPP
