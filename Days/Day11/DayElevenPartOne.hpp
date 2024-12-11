//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYELEVENPARTONE_HPP
#define UNTITLED_DAYELEVENPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayElevenPartOne : public Day {
public:
    void Execute() override;
};

static const bool dayElevenPartOneRegistered = [] {
    Day::Register("Day11 Part1", []() { return std::make_unique<DayElevenPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYELEVENPARTONE_HPP
