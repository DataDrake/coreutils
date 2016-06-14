cmake_minimum_required(VERSION 3.5)
project(coreutils)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(false false.c coreutils.h)
add_executable(true true.c coreutils.h)
add_executable(whoami whoami.c coreutils.h)
add_executable(yes yes.c coreutils.h)