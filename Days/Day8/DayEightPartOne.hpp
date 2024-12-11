//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYEIGHTPARTONE_HPP
#define UNTITLED_DAYEIGHTPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayEightPartOne : public Day {
public:
    void Execute() override;
};

static const bool dayEightPartOneRegistered = [] {
    Day::Register("Day8 Part1", []() { return std::make_unique<DayEightPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYEIGHTPARTONE_HPP
