cmake_minimum_required(VERSION 2.8)
project(test)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/core/types.hpp src/core/string.cpp src/core/string.h src/core/uncopyable.hpp src/core/log.hpp src/utility/singleton.hpp src/core/arraylist.hpp src/core/bytes.hpp src/core/byte.hpp src/core/linkedlist.hpp src/core/strkit.hpp src/core/hashtable.hpp)
#set(SOURCE_FILES src/core/*.cpp src/core/*.h src/core/*.hpp)

include_directories(src/)

add_executable(test ${SOURCE_FILES})