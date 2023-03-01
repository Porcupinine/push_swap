cmake_minimum_required(VERSION 3.23.2)
project(push_swap C)

set(CMAKE_C_STANDARD 90)
include_directories(${CMAKE_SOURCE_DIR}/printflibft/include)
add_executable(push_swap main.c push_swap.c include/push_swap.h stack/print_stack.c stack/swap.c turk/turck_push_b.c stack/create_stack.c stack/check_stack.c stack/search_stack.c turk/turk_search.c turk/turk_check_moves.c stack/push.c stack/rotate.c stack/reverse_rotate.c include/stack.h include/turk.h turk/sort_back.c)
target_link_libraries(push_swap ${CMAKE_SOURCE_DIR}/printflibft/libft.a)

#Linux version
#cmake_minimum_required(VERSION 3.24)
#project(push_swap C)
#
#set(CMAKE_C_STANDARD 90)
#include_directories(${CMAKE_SOURCE_DIR}/printflibft/include)
#add_executable(push_swap main.c push_swap.c push_swap.h list.c rules.c)
#target_link_libraries(push_swap ${CMAKE_SOURCE_DIR}/printflibft/libft.a)

