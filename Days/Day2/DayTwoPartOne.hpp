//
// Created by Dolpix on 12/9/2024.
//

#ifndef UNTITLED_DAYTWOPARTONE_HPP
#define UNTITLED_DAYTWOPARTONE_HPP

#include "../Day.h"


class DayTwoPartOne : public Day {
public:
    void Execute() override;
};

static const bool dayTwoRegistered = [] {
    Day::Register("Day2 Part1", []() { return std::make_unique<DayTwoPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYTWOPARTONE_HPP
