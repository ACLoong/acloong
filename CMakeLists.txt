cmake_minimum_required(VERSION 3.8)
project(acloong)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/core/base.h src/core/acstring.cpp src/core/acstring.h src/core/acuncopyable.hpp)

include_directories(src/core)

add_executable(acloong ${SOURCE_FILES})