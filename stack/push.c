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

#include "../include/turk.h"
#include "../include/t_stack.h"
#include "../printflibft/include/ft_printf.h"

void push(t_stack**head_x, t_stack**head_y)
{
	t_stack*x2;

	x2 = (*head_x)->next;
	(*head_x)->next = *head_y;
	*head_y = *head_x;
	*head_x =  x2;

}

void pb(t_stack**stack_a, t_stack**stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
void pa(t_stack**stack_a, t_stack**stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}
