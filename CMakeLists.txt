cmake_minimum_required(VERSION 3.8)
project(acloong)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/core/base.h src/core/string.cpp src/core/string.h src/core/uncopyable.hpp src/core/log.hpp src/utility/singleton.hpp src/core/arraylist.hpp src/core/bytes.hpp src/core/byte.hpp src/core/linkedlist.h)
#set(SOURCE_FILES src/core/*.cpp src/core/*.h src/core/*.hpp)

include_directories(src/)

add_executable(acloong ${SOURCE_FILES})