cmake_minimum_required(VERSION 3.9)
project(Flame)

set(CMAKE_CXX_STANDARD 11)

set(STATIC 0)
set(SHARED 1)

if (${STATIC})
    add_library(Flame main.cpp src/Flame.cpp include/Flame.h)
elseif (${SHARED})
    add_library(Flame SHARED main.cpp src/Flame.cpp include/Flame.h)
else ()
    add_executable(Flame main.cpp src/Flame.cpp include/Flame.h)
endif ()