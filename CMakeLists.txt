cmake_minimum_required(VERSION 3.23)
project(chess)

set(CMAKE_CXX_STANDARD 23)

add_executable(chess main.cpp pieces.cpp pieces.h chessboard.cpp chessboard.h)
