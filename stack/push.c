/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mixed_rules.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 09:41:56 by laura         #+#    #+#                 */
/*   Updated: 2023/02/21 09:41:56 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/turk.h"
#include "../headers/stack.h"
#include "ft_printf.h"

void push(stack **head_x, stack **head_y)
{
	stack *x2;

	x2 = (*head_x)->next;
	(*head_x)->next = *head_y;
	*head_y = *head_x;
	*head_x =  x2;

}

void pa(stack **stack_a, stack **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
void pb(stack **stack_a, stack **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}
