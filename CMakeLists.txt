cmake_minimum_required(VERSION 3.15)
project(trpo_chessviz)

set(CMAKE_CXX_STANDARD 14)

add_executable(trpo_chessviz src/main.c src/board.h src/board.c src/board_print_plain.c src/board_print_plain.h src/board_read.c src/board_read.h src/board_start.c src/board_start.h test/main.c)