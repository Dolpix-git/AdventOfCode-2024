//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTHIRTEENPARTONE_HPP
#define UNTITLED_DAYTHIRTEENPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayThirteenPartOne : public Day {
public:
    void Execute() override;
};

static const bool dayThirteenPartOneRegistered = [] {
    Day::Register("Day13 Part1", []() { return std::make_unique<DayThirteenPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYTHIRTEENPARTONE_HPP
