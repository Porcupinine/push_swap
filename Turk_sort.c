/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Turk_sort.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 13:37:25 by laura         #+#    #+#                 */
/*   Updated: 2023/02/16 13:37:25 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"
void print_test(stack *stack_a, stack *stack_b)
{
	ft_printf("stack a \n");
	print_stack(stack_a);
	ft_printf("stack b\n");
	print_stack(stack_b);
}

void find_closest_smaller(int a_nbr, stack *stack_b)
{
	int smallest;

	smallest = a_nbr;
	while (stack_b != NULL)
	{
		if (stack_b->number > smallest)
			stack_b = stack_b->next;
		else
		{
			smallest = stack_b->number;
			stack_b = stack_b->next;
		}
	}
	ft_printf("closest under %d is %d\n", a_nbr, smallest);
}

int find_closest_bigger(int a_nbr, stack *stack_b)
{
	int bigger;

	bigger = a_nbr;
	while (stack_b != NULL)
	{
		if (stack_b->number < bigger)
			stack_b = stack_b->next;
		else
		{
			bigger = stack_b->number;
			stack_b = stack_b->next;
		}
	}
	ft_printf("closest above %d is %d\n", a_nbr, bigger);
}

void sort_turk(stack **stack_a)
{
	stack *stack_b;

	stack_b = NULL;
	push(stack_a, &stack_b);
	push(stack_a, &stack_b);
	push(stack_a, &stack_b);
	push(stack_a, &stack_b);
	push(stack_a, &stack_b);
	print_test(*stack_a, stack_b);
	find_closest_smaller((*stack_a)->number, stack_b);
	find_closest_bigger((*stack_a)->number, stack_b);

	//find closest smaller on stack b
	//calculate moves for each number to be on top of the closest smaller
	//move number with the least amount of moves till there are only 3 numbers left on stack a
	//sort stack a
	//push numbers back, rotating a till top number is the closest bigger
}