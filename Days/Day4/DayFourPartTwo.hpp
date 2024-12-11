//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYFOURPARTTWO_HPP
#define UNTITLED_DAYFOURPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayFourPartTwo : public Day{
public:
    void Execute() override;
};

static const bool dayFourPartTwoRegistered = [] {
    Day::Register("Day4 Part2", []() { return std::make_unique<DayFourPartTwo>(); });
    return true;
}();

#endif //UNTITLED_DAYFOURPARTTWO_HPP
