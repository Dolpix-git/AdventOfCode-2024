//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYFOURPARTONE_HPP
#define UNTITLED_DAYFOURPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayFourPartOne : public Day{
public:
    void Execute() override;
};

static const bool dayFourPartTwoRegistered = [] {
    Day::Register("Day4 Part1", []() { return std::make_unique<DayFourPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYFOURPARTONE_HPP