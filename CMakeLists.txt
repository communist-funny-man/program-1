cmake_minimum_required(VERSION 3.2.6)
project(testc C)

include(CTest)
enable_testing()

set(CMAKE_C_STANDARD 99)

add_executable(testc main.c)