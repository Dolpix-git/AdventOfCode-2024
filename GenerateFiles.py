import os

basePath = "./Days"

cppTemplate = """//
// Created by Dolpix on {date}.
//

#include "{headerFile}"

void {className}::Execute() {{

}}
"""

hppTemplate = """//
// Created by Dolpix on {date}.
//

#ifndef UNTITLED_{headerGuard}
#define UNTITLED_{headerGuard}

#include "../Day.h"
#include <vector>

class {className} : public Day {{
public:
    void Execute() override;
}};

static const bool {registerName}Registered = [] {{
    Day::Register("{dayName}", []() {{ return std::make_unique<{className}>(); }});
    return true;
}}();

#endif //UNTITLED_{headerGuard}
"""

dayNames = [
    "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
    "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen", "Twenty",
    "TwentyOne", "TwentyTwo", "TwentyThree", "TwentyFour", "TwentyFive"
]

for day in range(6, 26):
    dayFolder = os.path.join(basePath, f"Day{day}")
    os.makedirs(dayFolder, exist_ok=True)

    partMap = {"One": 1, "Two": 2}
    
    for partStr, partNum in partMap.items():
        dayName = dayNames[day-1]
        className = f"Day{dayName}Part{partStr}"
        headerFile = f"{className}.hpp"
        sourceFile = f"{className}.cpp"
        headerGuard = className.upper() + "_HPP"
        registerName = className[0].lower() + className[1:]
        dayName = f"Day{day} Part{partNum}"

        hpp_content = hppTemplate.format(
            date="12/11/2024",
            headerGuard=headerGuard,
            className=className,
            registerName=registerName,
            dayName=dayName,
        )

        cpp_content = cppTemplate.format(
            date="12/11/2024",
            headerFile=headerFile,
            className=className,
        )

        with open(os.path.join(dayFolder, headerFile), "w") as header:
            header.write(hpp_content)
        with open(os.path.join(dayFolder, sourceFile), "w") as source:
            source.write(cpp_content)

print("Files generated!")
