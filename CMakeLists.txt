cmake_minimum_required(VERSION 3.6)
project(COJ_PROBLEMS)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(COJ_PROBLEMS ${SOURCE_FILES})