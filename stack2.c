/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack2.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 10:56:42 by laura         #+#    #+#                 */
/*   Updated: 2023/02/02 10:56:42 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"
#include <stdlib.h>

int check_for_repeat(stack *head, int nbr)
{
	while (head->next != NULL)
	{
		if (head->number == nbr)
			return (1);
		head = head->next;
	}
	if (head->number == nbr)
		return (1);
	return (0);
}

int biggest_value(stack *head)
{
	int biggest;

	biggest = head->number;
	while (head->next != NULL)
	{
		if (head->number > biggest)
			biggest = head->number;
		head = head->next;
	}
	if (head->number > biggest)
		biggest = head->number;
	return (biggest);
}

int smallest_value(stack *head)
{
	int smallest;

	smallest = head->number;
	while (head->next != NULL)
	{
		if (head->number < smallest)
			smallest = head->number;
		head = head->next;
	}
	if (head->number < smallest)
		smallest = head->number;
	return (smallest);
}

int check_counter_sort(stack *head)
{
	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		if (head->number > head->next->number)
			head = head->next;
		else
			return (1);
	}
	return (0);
}

int check_position(stack *head, int nbr)
{
	int position;

	position = 0;
	while (head->number != nbr)
	{
		head = head->next;
		position++;
	}
	return (position);
}