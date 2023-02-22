/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ra_rb_rr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 09:47:00 by laura         #+#    #+#                 */
/*   Updated: 2023/02/21 09:47:00 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/turk.h"
#include "../headers/stack.h"
#include "ft_printf.h"

void rotate(stack **head)
{
	stack *last;
	stack *n2;

	n2 = (*head)->next;
	last = find_last(*head);
	last->next = *head;
	(*head)->next = NULL;
	*head = n2;
}

void ra(stack **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void rb(stack **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void rr(stack **stack_a, stack **stack_b)
{
	rotate(stack_b);
	rotate(stack_a);
	ft_printf("rr\n");
}