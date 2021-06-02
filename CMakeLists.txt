cmake_minimum_required(VERSION 3.8)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# enable_testing()

add_subdirectory(googletest)
# add_subdirectory(src)
set(This Example)

set(Headers
    src/Example.hpp
)

set(Sources
    src/Example.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})


add_subdirectory(test)