/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_back.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/01 14:43:29 by laura         #+#    #+#                 */
/*   Updated: 2023/03/01 14:43:29 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/turk.h"
#include "../include/stack.h"
#include "../printflibft/include/ft_printf.h"

void bring_smaller_to_top(stack **a)
{
	int smaller;

	smaller = smallest_value(*a);
	while ((*a)->number != smaller)
	{
		if (check_position(*a, smaller) < ((check_size(*a)/2) +1))
			ra(a);
		else
			rra(a);
	}
}

void sort_a(stack **a)
{
	int first;
	int second;
	int third;

	while (check_sort(*a) != 0)
	{
		first = (*a)->number;
		second = (*a)->next->number;
		third = (*a)->next->next->number;
		if (first < second && second > third && first < third)
		{
			sa(a);
			ra(a);
		}
		if (first < second && second > third && first > third)
			rra(a);
		if (first > second && second > third && first > third)
		{
			ra(a);
			sa(a);
		}
		if (first > second && second < third && first < third)
			sa(a);
		if (first > second && second < third && first > third)
			ra(a);
	}
}

void sort_back_a(stack **a, stack **b)
{
	int under;
	int biggest_on_stack_a;

	while (*b != NULL)
	{
		under = find_closest_bigger((*b)->number, *a);
		biggest_on_stack_a = biggest_value(*a);
		if ((*b)->number > biggest_on_stack_a)
			under = smallest_value(*a);
		while ((*a)->number != under)
		{
			if (check_position(*a, under) < ((check_size(*a)/2) +1))
				ra(a);
			else
				rra(a);
		}
		pa(a,b);
	}
}
