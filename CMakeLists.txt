cmake_minimum_required(VERSION 3.20)
project(misfra_layer C)

set(CMAKE_C_STANDARD 11)

include_directories(pin/inc)

file(GLOB_RECURSE src_file
     "test/*.c"
     "pin/*.c"
     )
add_executable(misfra_layer
               ${src_file})
