# Set CMake variables
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Declare the project
project(Grocery VERSION 1.0 LANGUAGES CXX)

# Declare packages
find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})

# Include subdirectories
add_subdirectory(external)
add_subdirectory(src)
add_subdirectory(protos)
