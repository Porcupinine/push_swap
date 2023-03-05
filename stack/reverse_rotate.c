/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 09:52:10 by laura         #+#    #+#                 */
/*   Updated: 2023/02/21 09:52:10 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/turk.h"
#include "../include/stack.h"
#include "../printflibft/include/ft_printf.h"

void reverse_rotate(stack **head)
{
	stack *last;
	stack *penultimate;

	last = find_last(*head);
	penultimate = find_penultimate(*head);
	last->next = *head;
	penultimate->next = NULL;
	*head = last;
}

void rra(stack **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void rrb(stack **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void rrr(stack **stack_a, stack **stack_b)
{
	reverse_rotate(stack_b);
	reverse_rotate(stack_a);
	ft_printf("rrr\n");
}