/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list .c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 16:08:11 by laura         #+#    #+#                 */
/*   Updated: 2023/01/30 16:08:11 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/turk.h"
#include "../headers/stack.h"
#include "ft_printf.h"

void print_stack(stack *head)
{
	int count_nodes;

	count_nodes = 1;
	while (head != NULL)
	{
		ft_printf("Node %d value :%d\n", count_nodes, head->number);
		head = head->next;
		count_nodes++;
	}
}

void print_test(stack *stack_a, stack *stack_b)
{
    ft_printf("stack a \n");
    print_stack(stack_a);
    ft_printf("stack b\n");
    print_stack(stack_b);
}
