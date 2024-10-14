cmake_minimum_required(VERSION 3.10)
project(Mathzy VERSION 1.0.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Source files
file(GLOB SOURCES "src/*.cpp")

# Create the library
add_library(Mathzy ${SOURCES})

# Optionally, create an executable for testing
add_executable(MathzyTest tests/Mathzy_test.cpp)
target_link_libraries(MathzyTest Mathzy)
