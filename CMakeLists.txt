cmake_minimum_required(VERSION 3.10)
project(Grocery VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_subdirectory(external)
add_subdirectory(src)
