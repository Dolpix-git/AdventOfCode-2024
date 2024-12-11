//
// Created by KieranVelez on 04/12/2024.
//

#ifndef DAYONE_H
#define DAYONE_H

#include "../Day.h"


class DayOnePartOne : public Day {
public:
    void Execute() override;
};

static const bool dayOneRegistered = [] {
    Day::Register("Day1 Part1", []() { return std::make_unique<DayOnePartOne>(); });
    return true;
}();


#endif //DAYONE_H
