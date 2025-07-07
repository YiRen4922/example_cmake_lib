cmake_minimum_required(VERSION 3.10...3.28)

project(hello)

set(CMAKE_CXX_STANDARD 20)

message(STATUS "C++ STANDARD = ${CMAKE_CXX_STANDARD}")

add_subdirectory(../example_lib/ ${CMAKE_BINARY_DIR}/example_lib/)
add_subdirectory(../example_so/ ${CMAKE_BINARY_DIR}/example_so/)

add_executable(hello_world main.cpp)

# 注意add_subdirectory()可以比较方便的替代注释的两行
# target_include_directories(hello_world PUBLIC ../example_lib/)
# target_link_directories(hello_world PUBLIC ../example_lib/build/)
target_link_libraries(hello_world PRIVATE example_lib)

# set(SHARED_LIB_HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../example_so/)

# target_include_directories(hello_world PUBLIC ${SHARED_LIB_HEADER_DIR})

# target_link_directories(hello_world PRIVATE ${SHARED_LIB_HEADER_DIR}/build/)
target_link_libraries(hello_world PRIVATE example_so)



message("------------hello_world build successed-------------")
