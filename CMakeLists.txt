cmake_minimum_required(VERSION 3.8)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(googletest)

set(This Example)
set(INC_DIR 
    src/example
    external-lib/complex
    external-lib/points
    external-lib/class-a
    test/doubles/
)

include_directories(${INC_DIR})

set(Sources
    src/example/Example.cpp
    external-lib/complex/complex.cpp
    external-lib/points/points.c
)

add_library(${This} STATIC ${Sources})

add_subdirectory(test)