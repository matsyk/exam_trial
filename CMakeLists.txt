cmake_minimum_required(VERSION 3.20)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(program main.cpp tCounter.cpp)

add_executable(tests test.cpp tCounter.cpp)
