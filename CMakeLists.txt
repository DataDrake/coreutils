cmake_minimum_required(VERSION 3.5)
project(coreutils)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES yes.c coreutils.h whoami.c)
add_executable(whoami whoami.c coreutils.h)
add_executable(yes yes.c coreutils.h)