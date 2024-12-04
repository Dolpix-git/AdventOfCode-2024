//
// Created by KieranVelez on 04/12/2024.
//

#ifndef DAY_H
#define DAY_H

#include <vector>
#include <memory>
#include <string>
#include <functional>

class Day {
public:
    virtual ~Day() = default;

    virtual void Execute() = 0;

    static void Register(const std::string& name, const std::function<std::unique_ptr<Day>()>& creator);

    static const std::vector<std::pair<std::string, std::function<std::unique_ptr<Day>()>>>& GetScripts();

private:
    static std::vector<std::pair<std::string, std::function<std::unique_ptr<Day>()>>> registry;
};

#endif //DAY_H
