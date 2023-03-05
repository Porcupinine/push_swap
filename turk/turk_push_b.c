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

#include "../include//turk.h"
#include "../include//stack.h"
#include "../printflibft/include/ft_printf.h"

static void case_one (int *position_a, int *position_b, stack **a, stack **b)
{
	if (*position_a != 0 && *position_b != 0)
	{
		rr(a, b);
		(*position_b)--;
		(*position_a)--;
	}
	else if (*position_a != 0)
	{
		ra(a);
		(*position_a)--;
	}
	else
	{
		rb(b);
		(*position_b)--;
	}
}

static void case_two(int *position_a, int *position_b, stack **a, stack **b)
{
	if (*position_a != 0 && *position_b != 0)
	{
		rrr(a, b);
		(*position_b)--;
		(*position_a)--;
	}
	else if (*position_a != 0)
	{
		rra(a);
		(*position_a)--;
	}
	else
	{
		rrb(b);
		(*position_b)--;
	}
}

static void case_three(int *position_a, int *position_b, stack **a, stack **b)
{
	int size_a;
	int size_b;

	size_a = check_size(*a);
	size_b = check_size(*b);
	if (*position_a != 0 && *position_a > ((size_a / 2) + 1))
	{
		rra(a);
		(*position_a)--;
	}
	else if (*position_b  != 0 && *position_b <= ((size_b / 2) + 1))
	{
		rrb(b);
		(*position_b)--;
	}
	else if (*position_a != 0 && *position_a <= ((size_a / 2) + 1))
	{
		ra(a);
		(*position_a)--;
	}
	else if (*position_b != 0 && *position_b > ((size_b / 2) + 1))
	{
		rb(b);
		(*position_b)--;
	}
}

static void move_to_top(stack **stack_a, stack **stack_b, int winner)
{
	int pos_a;
	int pos_b;
	int size_a;
	int size_b;

	size_b = check_size(*stack_b);
	size_a = check_size(*stack_a);
	pos_a = check_position(*stack_a, winner);
	pos_b = check_position(*stack_b, find_closest_smaller(winner, *stack_b));
	while (pos_a != 0 || pos_b != 0)
	{
		if (pos_a <= ((size_a / 2) + 1) && pos_b <= ((size_b / 2) + 1))
			case_one(&pos_a, &pos_b, stack_a, stack_b);
		else if (pos_a > ((size_a / 2) + 1) && pos_b > ((size_b / 2) + 1))
			case_two(&pos_a, &pos_b, stack_a, stack_b);
		else
			case_three(&pos_a, &pos_b, stack_a, stack_b);
	}
}

void turk_push_b(stack **stack_a)
{
	stack *stack_b;
	int winner;

	winner = 0;
	stack_b = NULL;
	pb(stack_a, &stack_b);
	pb(stack_a, &stack_b);
	while (check_size(*stack_a) > 3)
	{
		winner = pick_winner(*stack_a, stack_b);
		move_to_top(stack_a, &stack_b, winner);
		pb(stack_a, &stack_b);
	}
	sort_a(stack_a);
	sort_back_a(stack_a, &stack_b);
	bring_smaller_to_top(stack_a);
}