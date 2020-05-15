cmake_minimum_required(VERSION 3.15)
project(trpo_chessviz)

set(CMAKE_CXX_STANDARD 14)

add_executable(trpo_chessviz src/main.cpp src/board.h src/board.cpp src/board_print_plain.cpp src/board_print_plain.h src/board_read.cpp src/board_read.h src/board_start.cpp src/board_start.h test/main.c)