cmake_minimum_required(VERSION 3.24)
project(class_building)

set(CMAKE_CXX_STANDARD 17)

set(Headers Building.h)

add_executable(class_building Building.cpp main.cpp)
