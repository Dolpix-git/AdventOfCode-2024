cmake_minimum_required(VERSION 3.28.1)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        untitled main.cpp
        Days/Day.h
        Days/Day.cpp
        Days/DayOne/DayOnePartOne.cpp
        Days/DayOne/DayOnePartOne.h
        Days/DayOne/DayOnePartTwo.cpp
        Days/DayOne/DayOnePartTwo.h
        Days/DayTwo/DayTwoPartOne.cpp
        Days/DayTwo/DayTwoPartOne.hpp
        Days/DayTwo/DayTwoPartTwo.cpp
        Days/DayTwo/DayTwoPartTwo.hpp
)
