cmake_minimum_required(VERSION 3.15)
project(untitled21 C)

set(CMAKE_C_STANDARD 11)

find_library(CUNIT libcunit.dll.a C:/cygwin64/lib)
include_directories(C:/cygwin64/usr/include/CUnit .)

add_executable(untitled21 main.c sum_and_average.c max_and_sum.h)

target_link_libraries(untitled21 PUBLIC ${CUNIT})