cmake_minimum_required(VERSION 3.12)

message(STATUS ${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable(run src/main.cc)

add_library(figures SHARED src/figures.cc)
target_link_libraries(run figures)
