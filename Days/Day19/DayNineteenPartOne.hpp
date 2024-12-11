//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYNINETEENPARTONE_HPP
#define UNTITLED_DAYNINETEENPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayNineteenPartOne : public Day {
public:
    void Execute() override;
};

static const bool dayNineteenPartOneRegistered = [] {
    Day::Register("Day19 Part1", []() { return std::make_unique<DayNineteenPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYNINETEENPARTONE_HPP
