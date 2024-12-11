//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYSIXPARTONE_HPP
#define UNTITLED_DAYSIXPARTONE_HPP

#include "../Day.h"
#include <vector>

class DaySixPartOne : public Day {
public:
    void Execute() override;
};

static const bool daySixPartOneRegistered = [] {
    Day::Register("Day6 Part1", []() { return std::make_unique<DaySixPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYSIXPARTONE_HPP
