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

#include "../include/turk.h"
#include "../include/t_stack.h"
#include "../printflibft/include/ft_printf.h"

void print_stack(t_stack*head)
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

void print_test(t_stack*stack_a, t_stack*stack_b)
{
    ft_printf("t_stacka \n");
    print_stack(stack_a);
    ft_printf("t_stackb\n");
    print_stack(stack_b);
}
