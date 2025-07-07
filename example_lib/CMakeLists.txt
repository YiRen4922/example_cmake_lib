cmake_minimum_required(VERSION 3.10)

project(example_lib)

set(CMAKE_CXX_STANDARD 20)

message(STATUS "C++ STANDARD = ${CMAKE_CXX_STANDARD}")

# add_executable(hello_world main.cpp)

add_library(example_lib STATIC example_lib.cpp)

target_include_directories(example_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

message("------------example_lib build successed-------------")
