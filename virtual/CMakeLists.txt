cmake_minimum_required(VERSION 3.4.0)

project(virtual)

file(GLOB source ./*.cpp)

add_executable(virtual ${source})