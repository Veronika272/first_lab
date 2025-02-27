cmake_minimum_required(VERSION 3.10)
project(first_lab)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/out")

include_directories(src)

add_executable(MyExecutable src/main.cpp src/utils.cpp src/utils.hpp)
