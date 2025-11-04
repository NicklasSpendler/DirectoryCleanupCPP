cmake_minimum_required(VERSION 4.0)
project(DirectoryCleanup)

set(CMAKE_CXX_STANDARD 26)

add_executable(DirectoryCleanup main.cpp
        lib/DirectoryCleanup.cpp
        lib/DirectoryCleanup.h)
