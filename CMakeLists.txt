cmake_minimum_required(VERSION 3.8)
project(csc600_p2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES strOPS.c strOPS.h main.c)

add_executable(csc600_p2 ${SOURCE_FILES})