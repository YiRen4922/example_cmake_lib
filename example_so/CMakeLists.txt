cmake_minimum_required(VERSION 3.10)

project(example_so)

set(CMAKE_CXX_STANDARD 20)

message(STATUS "C++ STANDARD = ${CMAKE_CXX_STANDARD}")

add_library(example_so SHARED example_so.cpp)

target_include_directories(example_so PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

message("------------example_so build successed-------------")
