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

#include "push_swap.h"
#include "ft_printf.h"
#include <stdlib.h>

void add_node(stack **head, int nbr)
{
	stack *n_nbr;

	n_nbr = malloc(1 * sizeof(stack));
	if (n_nbr == NULL)
		return ;
	n_nbr->number = nbr;
	n_nbr->next = *head;
	*head = n_nbr;
}

void print_list(stack *nList)
{
	int count_nodes;

	count_nodes = 1;
	while (nList != NULL)
	{
		ft_printf("Node %d value :%d\n", count_nodes, nList->number);
		nList = nList->next;
		count_nodes++;
	}
}

stack *find_last(stack *head)
{
	while (head->next != NULL)
	{
		head = head->next;
	}
	return (head);
}

stack *find_penultimate(stack *head)
{
	while (head->next->next != NULL)
	{
		head = head->next;
	}
	return (head);
}

int check_sort(stack *head)
{
	while (head->next != NULL)
	{
		if (head->number < head->next->number)
			head = head->next;
		else
			return (1);
	}
	return (0);
}