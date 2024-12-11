//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYSEVENTEENPARTONE_HPP
#define UNTITLED_DAYSEVENTEENPARTONE_HPP

#include "../Day.h"
#include <vector>

class DaySeventeenPartOne : public Day {
public:
    void Execute() override;
};

static const bool daySeventeenPartOneRegistered = [] {
    Day::Register("Day17 Part1", []() { return std::make_unique<DaySeventeenPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYSEVENTEENPARTONE_HPP
