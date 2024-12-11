//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTWENTYFOURPARTONE_HPP
#define UNTITLED_DAYTWENTYFOURPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayTwentyFourPartOne : public Day {
public:
    void Execute() override;
};

static const bool dayTwentyFourPartOneRegistered = [] {
    Day::Register("Day24 Part1", []() { return std::make_unique<DayTwentyFourPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYTWENTYFOURPARTONE_HPP
