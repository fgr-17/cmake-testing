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
set(INC_DIR "/src/example")
set(LIB_DIR "/external-lib")

# target_include_directories(${This} INTERFACE ${INC_DIR})
# include_directories(${INC_DIR})

set(Sources
    src/example/Example.cpp
)

add_library(${This} STATIC ${Sources})
target_include_directories(${This} INTERFACE ${INC_DIR})

add_subdirectory(test)