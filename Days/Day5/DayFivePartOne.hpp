//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYFIVEPARTONE_HPP
#define UNTITLED_DAYFIVEPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayFivePartOne : public Day{
public:
    void Execute() override;
};

static const bool dayFivePartOneRegistered = [] {
    Day::Register("Day5 Part1", []() { return std::make_unique<DayFivePartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYFIVEPARTONE_HPP
