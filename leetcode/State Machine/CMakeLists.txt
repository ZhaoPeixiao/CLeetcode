cmake_minimum_required(VERSION 3.19)
project(State_Machine)

set(CMAKE_CXX_STANDARD 14)

include_directories("State Machine")

add_executable(State_Machine
        "State Machine/leetcode121.h"
        "State Machine/leetcode122.h"
        "State Machine/leetcode123.h"
        "State Machine/leetcode188.h"
        "State Machine/leetcode714.h"
        "State Machine/main.cpp")
