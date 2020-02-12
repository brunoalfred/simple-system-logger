cmake_minimum_required(VERSION 3.15)
project(stackUnwinding)

set(CMAKE_CXX_STANDARD 17)

add_executable(stackUnwinding main.cpp function.cpp function.h)