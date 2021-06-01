cmake_minimum_required(VERSION 3.8)

set(This Example)

set(Headers
    Example.hpp
)

set(Sources
    Example.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})
