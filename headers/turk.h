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

#include "stack.h"

//---------------turk_sort.c------------------
/**
 *
 * @param stack_a
 */
void sort_turk(stack **stack_a);

//----------------turk_search.c----------------
/**
 * finds the biggest number after a_nbr
 * @param a_nbr number to push
 * @param stack_b stack to search
 * @return smaller biggest number
 */
int find_closest_bigger(int a_nbr, stack *stack_b);
/**
 * fids the smaller number after a_nbr
 * @param a_nbr number to push
 * @param stack_b stack to search
 * @return bigger smallest number
 */
int find_closest_smaller(int a_nbr, stack *stack_b);

//--------------turk_check.c----------------------
int pick_winner(stack *stack_a, stack *stack_b);
#endif //PUSH_SWAP_TURK_H
