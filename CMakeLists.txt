cmake_minimum_required(VERSION 3.21)
project(Primes)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")
set(BUILD_SHARED_LIBS OFF)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Primes main.cpp)
