/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rules.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 19:33:19 by laura         #+#    #+#                 */
/*   Updated: 2023/01/30 19:33:19 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include//turk.h"
#include "../include//t_stack.h"
#include "../printflibft/include/ft_printf.h"

void swap(t_stack**head)
{
    t_stack*tmp;
	t_stack*n2;

	n2 = (*head)->next;
    tmp = n2->next;
	n2->next = (*head);
	(*head)->next = tmp;
	*head = n2;
}

void sa(t_stack**stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void sb(t_stack**stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void ss(t_stack**stack_a, t_stack**stack_b)
{
	swap(stack_b);
	swap(stack_a);
	ft_printf("ss\n");
}


