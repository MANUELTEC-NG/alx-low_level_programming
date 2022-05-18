cmake_minimum_required(VERSION 3.16)
project(alx-low_level_programming C)

set(CMAKE_C_STANDARD 99)

add_executable(alx-low_level_programming main.c 0x06-pointers_arrays_strings/0-strcat.c 0x06-pointers_arrays_strings/1-strncat.c 0x06-pointers_arrays_strings/2-strncpy.c 0x06-pointers_arrays_strings/3-strcmp.c 0x06-pointers_arrays_strings/4-rev_array.c 0x06-pointers_arrays_strings/5-string_toupper.c 0x06-pointers_arrays_strings/6-cap_string.c 0x06-pointers_arrays_strings/7-leet.c 0x06-pointers_arrays_strings/100-rot13.c 0x06-pointers_arrays_strings/101-print_number.c 0x06-pointers_arrays_strings/102-magic.c 0x06-pointers_arrays_strings/103-infinite_add.c 0x06-pointers_arrays_strings/104-print_buffer.c)

include_directories(0x00-hello_world)
include_directories(0x01-variables_if_else_while)
include_directories(0x02-functions_nested_loops)
include_directories(0x03-debugging)
include_directories(0x04-more_functions_nested_loops)
include_directories(0x05-pointers_arrays_strings)