//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYNINEPARTONE_HPP
#define UNTITLED_DAYNINEPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayNinePartOne : public Day {
public:
    void Execute() override;
};

static const bool dayNinePartOneRegistered = [] {
    Day::Register("Day9 Part1", []() { return std::make_unique<DayNinePartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYNINEPARTONE_HPP
