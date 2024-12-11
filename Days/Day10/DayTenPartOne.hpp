//
// Created by Dolpix on 12/11/2024.
//

#ifndef UNTITLED_DAYTENPARTONE_HPP
#define UNTITLED_DAYTENPARTONE_HPP

#include "../Day.h"
#include <vector>

class DayTenPartOne : public Day {
public:
    void Execute() override;
};

static const bool dayTenPartOneRegistered = [] {
    Day::Register("Day10 Part1", []() { return std::make_unique<DayTenPartOne>(); });
    return true;
}();

#endif //UNTITLED_DAYTENPARTONE_HPP
