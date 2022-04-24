cmake_minimum_required(VERSION 3.16)
project(alx-low_level_programming C)

set(CMAKE_C_STANDARD 99)

add_executable(alx-low_level_programming main.c 0x06-pointers_arrays_strings/0-strcat.c 0x06-pointers_arrays_strings/1-strncat.c)

include_directories(0x00-hello_world)
include_directories(0x01-variables_if_else_while)
include_directories(0x02-functions_nested_loops)
include_directories(0x03-debugging)
include_directories(0x04-more_functions_nested_loops)
include_directories(0x05-pointers_arrays_strings)