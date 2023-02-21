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

#include "headers/push_swap.h"
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
	mid_value = stack_size/2;
//	while(count < mid_value)
//	{
//		push(stack_a, stack_b);
//		ft_printf("pb\n");
//		count++;
//		(*actions)++;
//	}
	while (count < mid_value)
	{
		if((*stack_a)->number < (*stack_a)->next->number && (*stack_a)->number < find_last(*stack_a)->number)
		{
			push(stack_a, stack_b);
			ft_printf("pb\n");
			count++;
			(*actions)++;
		}
		else if ((*stack_a)->number > (*stack_a)->next->number)
		{
			if((*stack_a)->next->number < find_last(*stack_a)->number)
			{
				swap(stack_a);
				ft_printf("sa\n");
				(*actions)++;
				push(stack_a, stack_b);
				ft_printf("pb\n");
				(*actions)++;
				count++;
			}
			else
			{
				rotate(stack_a);
				ft_printf("ra\n");
				(*actions)++;
				push(stack_a, stack_b);
				ft_printf("pb\n");
				(*actions)++;
				count++;
			}
		}
	}
}

static void divide_by_two(stack **stack_a, stack **stack_b, int stack_size, int *actions)
{
	int mid;

	mid = stack_size / 2;
	ft_printf("actions: %d\n", *actions);
	while (mid > 0)
	{
		if ((*stack_a)->number == smallest_value(*stack_a))
		{
			push(stack_a, stack_b);
			ft_printf("pb\n");
			mid--;
			(*actions)++;
		}
		else if ((*stack_a)->number > (*stack_a)->next->number)
		{
			swap(stack_a);
			ft_printf("sa\n");
			(*actions)++;
		}
		else if (check_position(*stack_a, smallest_value(*stack_a)) < mid)
		{
			rotate(stack_a);
			ft_printf("ra\n");
			(*actions)++;
		}
		else
		{
			reverse_rotate(stack_a);
			ft_printf("rra\n");
			(*actions)++;
		}
	}
	if (check_sort(*stack_a) == 1)
	{

	}
	while((*stack_b) != NULL)
	{
		push(stack_b, stack_a);
		(*actions)++;
		ft_printf("pa\n");
	}
	ft_printf("action %d:\n", *actions);
}

static void sort(stack **stack_a, stack **stack_b, int *actions)
{
	int mid =4;
//	while (check_sort(*stack_a) != 0 || check_counter_sort(*stack_b) != 0) {
//		if (check_sort(*stack_a) != 0 && check_counter_sort(*stack_b) != 0) {
//			if ((*stack_a)->number > (*stack_a)->next->number && (*stack_b)->number < (*stack_b)->next->number) {
//				swap(stack_a);
//				swap(stack_b);
//				ft_printf("ss\n");
//				*actions++;
//			} else {
//				rotate(stack_b);
//				rotate(stack_a);
//				ft_printf("rr\n");
//				*actions++;
//			}
//		} else if (check_sort(*stack_a) != 0) {
//			if ((*stack_a)->number > (*stack_a)->next->number) {
//				swap(stack_a);
//				ft_printf("sa\n");
//				(*actions)++;
//			} else if (check_position(*stack_a, smallest_value(*stack_a)) < mid) {
//				rotate(stack_a);
//				ft_printf("ra\n");
//				(*actions)++;
//			} else {
//				reverse_rotate(stack_a);
//				ft_printf("rra\n");
//				(*actions)++;
//			}
//		} else if (check_counter_sort(*stack_b) != 0) {
//			if ((*stack_b)->number > (*stack_b)->next->number) {
//				swap(stack_b);
//				ft_printf("sa\n");
//				(*actions)++;
//			} else if (check_position(*stack_b, biggest_value(*stack_b)) < mid) {
//				rotate(stack_b);
//				ft_printf("ra\n");
//				(*actions)++;
//			} else {
//				reverse_rotate(stack_b);
//				ft_printf("rra\n");
//				(*actions)++;
//			}
//		}
//	}
	while (check_sort(*stack_a) != 0 || check_counter_sort(*stack_b) !=0)
	{

	}
}

//static short(stack **stack_a, stack **stack_b, int *actions)
//{
//
//}

void push_swap(stack **stack_a, int stack_size)
{
	stack *stack_b;
	int actions;

	actions = 0;
	stack_b = NULL;
//	get_average(*stack_a, stack_size);
	divide_stacks(stack_a, &stack_b, stack_size, &actions);
	print_stack(*stack_a);
	ft_printf("pre stack a \n");
	print_stack(*stack_a);
	ft_printf("pre stack b \n");
	print_stack(stack_b);
	ft_printf("actions:%d\n", actions);
	sort(stack_a, &stack_b, &actions);
	ft_printf("stack a \n");
	print_stack(*stack_a);
	ft_printf("stack b \n");
	print_stack(stack_b);
//	while(check_sort(*stack_a) != 0 || check_counter_sort(stack_b) != 0)
//	{
//		if (stack_b->number < stack_b->next->number)
//			swap(&stack_b);
//		if ((*stack_a)->number > (*stack_a)->next->number)
//			swap(stack_a);
//	}
}

