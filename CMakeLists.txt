cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_C_STANDARD 99)

include_directories(inc)

file(GLOB SOURCES "src/*.c")

add_executable(greeting ${SOURCES})