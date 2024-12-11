//
// Created by Dolpix on 12/9/2024.
//

#ifndef UNTITLED_DAYTWOPARTTWO_HPP
#define UNTITLED_DAYTWOPARTTWO_HPP

#include "../Day.h"
#include <vector>

class DayTwoPartTwo : public Day {
public:
    void Execute() override;

private:
    bool IsSafeReport(const std::vector<int>& report);
};

static const bool dayTwoPartTwoRegistered = [] {
    Day::Register("Day2 Part2", []() { return std::make_unique<DayTwoPartTwo>(); });
    return true;
}();

#endif // UNTITLED_DAYTWOPARTTWO_HPP
