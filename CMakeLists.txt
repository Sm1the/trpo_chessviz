cmake_minimum_required(VERSION 3.15)
project(trpo_chessviz)

set(CMAKE_CXX_STANDARD 14)

add_executable(trpo_chessviz main.cpp board.h board.cpp board_print_plain.cpp board_print_plain.h board_read.cpp board_read.h board_start.cpp board_start.h)