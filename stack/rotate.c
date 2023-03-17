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

#include "../include/turk.h"
#include "../include//t_stack.h"
#include "../printflibft/include/ft_printf.h"

void rotate(t_stack**head)
{
	t_stack*last;
	t_stack*n2;

	n2 = (*head)->next;
	last = find_last(*head);
	last->next = *head;
	(*head)->next = NULL;
	*head = n2;
}

void ra(t_stack**stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void rb(t_stack**stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void rr(t_stack**stack_a, t_stack**stack_b)
{
	rotate(stack_b);
	rotate(stack_a);
	ft_printf("rr\n");
}