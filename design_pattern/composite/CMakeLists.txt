cmake_minimum_required(VERSION 3.4)

project(composite)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
file(GLOB source ./*.cpp)

add_executable(composite ${source})