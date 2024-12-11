//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYSEVENPARTONE_HPP
#define UNTITLED_DAYSEVENPARTONE_HPP

#include "../Day.h"
#include <vector>

class DaySevenPartOne : public Day {
public:
    void Execute() override;
};

static const bool daySevenPartOneRegistered = [] {
    Day::Register("Day7 Part1", []() { return std::make_unique<DaySevenPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYSEVENPARTONE_HPP
