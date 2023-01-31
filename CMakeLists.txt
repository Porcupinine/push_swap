cmake_minimum_required(VERSION 3.23.2)
project(push_swap C)

set(CMAKE_C_STANDARD 90)
include_directories(${CMAKE_SOURCE_DIR}/printflibft/include)
add_executable(push_swap main.c push_swap.c push_swap.h list.c rules.c)
target_link_libraries(push_swap ${CMAKE_SOURCE_DIR}/printflibft/libft.a)

#Linux version
#cmake_minimum_required(VERSION 3.24)
#project(push_swap C)
#
#set(CMAKE_C_STANDARD 90)
#include_directories(${CMAKE_SOURCE_DIR}/printflibft/include)
#add_executable(push_swap main.c push_swap.c push_swap.h "list .c" rules.c)
#target_link_libraries(push_swap ${CMAKE_SOURCE_DIR}/printflibft/libft.a)