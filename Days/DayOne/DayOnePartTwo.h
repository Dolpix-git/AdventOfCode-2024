//
// Created by KieranVelez on 04/12/2024.
//

#ifndef DAYONEPARTTWO_H
#define DAYONEPARTTWO_H
#include "../Day.h"


class DayOnePartTwo : public Day {
public:
    void Execute() override;
};

static const bool dayTwoRegistered = [] {
    Day::Register("Day1 Part2", []() { return std::make_unique<DayOnePartTwo>(); });
    return true;
}();




#endif //DAYONEPARTTWO_H
