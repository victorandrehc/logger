cmake_minimum_required(VERSION 3.22)
project(loggerd)

set(CMAKE_CXX_STANDARD 20)

include_directories("spdlog/include/")
add_executable(loggerd main.cpp)
