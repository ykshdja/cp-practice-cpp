cmake_minimum_required(VERSION 3.20)
project(cp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -Wall -Wextra")

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "*.cpp")

add_executable(cp ${SOURCES}
        vol-1/ch-1/Ex-1/eight.cpp
        vol-1/ch-2/task1.cpp)
