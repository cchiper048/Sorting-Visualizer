cmake_minimum_required(VERSION 3.22)
project(merge)

set(CMAKE_CXX_STANDARD 20)

add_executable(merge main.cpp src/Merge.cpp src/Merge.h)
