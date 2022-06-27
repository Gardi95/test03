cmake_minimum_required(VERSION 3.20)
project(test03)

set(CMAKE_CXX_STANDARD 14)

add_executable(test03 main.cpp Fish.cpp Fish.h carp.cpp carp.h shark.cpp shark.h)
