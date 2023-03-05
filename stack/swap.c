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
#include "../include//stack.h"
#include "../printflibft/include/ft_printf.h"

void swap(stack **head)
{
    stack *tmp;
	stack *n2;

	n2 = (*head)->next;
    tmp = n2->next;
	n2->next = (*head);
	(*head)->next = tmp;
	*head = n2;
}

void sa(stack **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void sb(stack **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void ss(stack **stack_a, stack **stack_b)
{
	swap(stack_b);
	swap(stack_a);
	ft_printf("ss\n");
}


