//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYSIXTEENPARTONE_HPP
#define UNTITLED_DAYSIXTEENPARTONE_HPP

#include "../Day.h"
#include <vector>

class DaySixteenPartOne : public Day {
public:
    void Execute() override;
};

static const bool daySixteenPartOneRegistered = [] {
    Day::Register("Day16 Part1", []() { return std::make_unique<DaySixteenPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYSIXTEENPARTONE_HPP
