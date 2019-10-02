cmake_minimum_required (VERSION 3.0)
project (reverse)

include_directories(
    ~/vcpkg/installed/x64-linux/include)

add_executable(reverse main.cpp)