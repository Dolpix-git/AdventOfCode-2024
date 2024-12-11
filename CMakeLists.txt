cmake_minimum_required(VERSION 3.28.1)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        untitled main.cpp
        Days/Day.h
        Days/Day.cpp
        Days/Day1/DayOnePartOne.cpp
        Days/Day1/DayOnePartOne.h
        Days/Day1/DayOnePartTwo.cpp
        Days/Day1/DayOnePartTwo.h
        Days/Day2/DayTwoPartOne.cpp
        Days/Day2/DayTwoPartOne.hpp
        Days/Day2/DayTwoPartTwo.cpp
        Days/Day2/DayTwoPartTwo.hpp
        Days/Day3/DayThreePartOne.cpp
        Days/Day3/DayThreePartOne.hpp
        Days/Day3/DayThreePartTwo.cpp
        Days/Day3/DayThreePartTwo.hpp
)
