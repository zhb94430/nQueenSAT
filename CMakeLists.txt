cmake_minimum_required(VERSION 3.13)
project(nQueensSAT)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_CXX_FLAGS_RELEASE "-O3")


add_executable(nQueens
               main.cpp )
