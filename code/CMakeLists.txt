cmake_minimum_required(VERSION 3.8)
project(grid_simulation)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES log.h log.cpp)
add_executable(grid_simulation ${SOURCE_FILES})