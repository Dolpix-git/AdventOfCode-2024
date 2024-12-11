//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWELVEPARTONE_HPP
#define UNTITLED_DAYTWELVEPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayTwelvePartOne : public Day {
public:
    void Execute() override;
};

static const bool dayTwelvePartOneRegistered = [] {
    Day::Register("Day12 Part1", []() { return std::make_unique<DayTwelvePartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYTWELVEPARTONE_HPP
