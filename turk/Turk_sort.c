/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Turk_sort.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 13:37:25 by laura         #+#    #+#                 */
/*   Updated: 2023/02/16 13:37:25 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "ft_printf.h"

void sort_turk(stack **stack_a)
{
	stack *stack_b;

	stack_b = NULL;
	push(stack_a, &stack_b);
	push(stack_a, &stack_b);
    push(stack_a, &stack_b);
    push(stack_a, &stack_b);
    push(stack_a, &stack_b);
    print_test(*stack_a, stack_b);
	find_closest_smaller((*stack_a)->number, stack_b);
	find_closest_bigger((*stack_a)->number, stack_b);
	//calculate moves for each number to be on top of the closest smaller
	//move number with the least amount of moves till there are only 3 numbers left on stack a
	//sort stack a
	//push numbers back, rotating a till top number is the closest bigger
}