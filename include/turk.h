/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   turk.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 11:16:38 by laura         #+#    #+#                 */
/*   Updated: 2023/02/21 11:16:38 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_TURK_H
#define PUSH_SWAP_TURK_H

#include "t_stack.h"

//-----------------------------------------------------------------push_cases.c
void push_case_zero(int position_a, t_stack **a);
void push_case_one(int position_a, int position_b, t_stack **a, t_stack **b);
void push_case_two(int position_a, int position_b, t_stack **a, t_stack **b);
void push_case_four(int position_a, int position_b, t_stack **a, t_stack **b);
void push_case_three(int pos_a, int pos_b, t_stack**a, t_stack**b);


//-----------------------------------------------------------------move_cases.c
int move_case_zero(int pos_a, int size_a);
int move_case_one(int position_a, int position_b);
int move_case_two(int position_a, int position_b, int size_a, int size_b);
int move_case_three(int pos_a, int pos_b, int size_a, int size_b);

//------------------------------------------------------------------sort_back.c
void sort_back_a(t_stack **a, t_stack **b);
void sort_a(t_stack **a);
void bring_smaller_to_top(t_stack **a);

//------------------------------------------------------------------turk_sort.c
/**
 *
 * @param stack_a
 */
void turk_push_b(t_stack **stack_a);

//----------------------------------------------------------------turk_search.c
/**
 * finds the biggest number after a_nbr
 * @param a_nbr number to push
 * @param stack_b stack to search
 * @return smaller biggest number
 */
int find_closest_bigger(int a_nbr, t_stack *stack_b);
/**
 * fids the smaller number after a_nbr
 * @param a_nbr number to push
 * @param stack_b stack to search
 * @return bigger smallest number
 */
int find_closest_smaller(int a_nbr, t_stack *stack_b);

//-----------------------------------------------------------------turk_check_moves.c
int pick_winner(t_stack *a, t_stack *b);
int determine_moves(int nbr, int position_a, int size_a, t_stack* b);

void move_to_top(t_stack**a, t_stack**b, int winner);
#endif //PUSH_SWAP_TURK_H
