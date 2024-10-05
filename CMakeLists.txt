cmake_minimum_required(VERSION 3.10)
project(Dev)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Specify compiler options
add_compile_options(
    -pipe
    -D_FORTIFY_SOURCE=2
    -D_GLIBCXX_ASSERTIONS
    -std=c++23
    -O2
    -flto
    -Wall
    -Wextra
    -Wno-unused-parameter
    -Wno-unused-variable
)

set(SOURCE_DIR "D:/Coding/Cpp")
file(GLOB SOURCES "${SOURCE_DIR}/*.cpp")

add_executable(my_program ${SOURCES})

include_directories(include)
