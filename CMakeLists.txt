cmake_minimum_required(VERSION 3.21)
project(cpp_module07)

set(CMAKE_CXX_STANDARD 98)

file(GLOB EX00 ex00/*.cpp ex00/*.hpp)
add_executable(ex00 ${EX00})
