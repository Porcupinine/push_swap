/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 11:21:52 by laura         #+#    #+#                 */
/*   Updated: 2023/01/30 11:21:52 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

int get_average(stack *stack_a, int stack_size)
{
	int sum;
	int count;

	count = stack_size;
	sum = 0;
	while (count > 0)
	{
		sum += stack_a->number;
		count--;
		stack_a = stack_a->next;
	}
	ft_printf("sum is: %d\n average is: %d\n", sum, sum/stack_size);
}

static void divide_stacks(stack **stack_a, stack **stack_b, int stack_size, int *actions)
{
	int mid_value;
	int count;

	count = 0;
	mid_value = get_average(*stack_a, stack_size);
	while(count < stack_size)
	{
		if ((*stack_a)->number < mid_value)
			push(stack_a, stack_b);
		count++;
		actions++;
		ft_printf("stack a\n");
		print_stack(*stack_a);
		ft_printf("stack b\n");
		print_stack(*stack_b);
	}
}
static void divide_by_two(stack **stack_a, stack **stack_b, int stack_size, int *actions)
{
	int mid;

	mid = stack_size / 2;
	while (mid > 0)
	{
		if ((*stack_a)->number == smallest_value(*stack_a))
		{
			push(stack_a, stack_b);
			mid--;
			actions++;
		}
		else if ((*stack_a)->number > (*stack_a)->next->number)
		{
			swap(stack_a);
			actions++;
		}
		else if (check_position(*stack_a, smallest_value(*stack_a)) < mid)
		{
			ft_printf("pre rotate\n");
			print_stack(*stack_a);
			rotate(stack_a);
			ft_printf("pos rotate\n");
			print_stack(*stack_a);
			actions++;
		}
		else
		{
			ft_printf("pre reverse rotate\n");
			print_stack(*stack_a);
			reverse_rotate(stack_a);
			ft_printf("pos reverse rotate\n");
			print_stack(*stack_a);
			actions++;
		}
	}
	if (check_sort(*stack_a) == 1)
	{

	}
	while((*stack_b) != NULL)
		push(stack_b, stack_a);
	ft_printf("stack a\n");
	print_stack(*stack_a);
	ft_printf("stack b\n");
	print_stack(*stack_b);
	ft_printf("action %d:\n", actions);
}

void push_swap(stack **stack_a, int stack_size)
{
	stack *stack_b;
	int *actions;

	actions = 0;
	stack_b = NULL;
	get_average(*stack_a, stack_size);
	divide_stacks(stack_a, &stack_b, stack_size, actions);
//	while(check_sort(*stack_a) != 0 || check_counter_sort(stack_b) != 0)
//	{
//		if (stack_b->number < stack_b->next->number)
//			swap(&stack_b);
//		if ((*stack_a)->number > (*stack_a)->next->number)
//			swap(stack_a);
//	}
}

