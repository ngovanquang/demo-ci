cmake_minimum_required(VERSION 3.10)
project(greeting)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_C_STANDARD 99)

include_directories(inc)

file(GLOB SOURCES "src/*.c")

add_executable(greeting ${SOURCES})