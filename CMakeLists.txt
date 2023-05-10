cmake_minimum_required(VERSION 3.25)
project(Montreal)

set(CMAKE_CXX_STANDARD 23)

add_executable(Montreal main.cpp bitboard.cpp moves.cpp)
