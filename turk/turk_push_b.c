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
#include "../include//t_stack.h"
#include "../printflibft/include/ft_printf.h"
#include "../printflibft/include/libft.h"

void move_to_top(t_stack**a, t_stack**b, int winner)
{
	int pos_a;
	int pos_b;
	int mid_a;
	int mid_b;
	mid_b = ((check_size(*b) / 2));
	mid_a = ((check_size(*a) / 2));
	pos_a = check_position(*a, winner);
	pos_b = check_position(*b, find_closest_smaller(winner, *b));
	if (winner > biggest_value(*b) || winner < smallest_value(*b))
		pos_b = check_position(*b, biggest_value(*b));
	while (pos_a != 0 || pos_b != 0)
	{
		if (pos_a <= (mid_a) && pos_b <= (mid_b))
			push_case_one(pos_a, pos_b, a, b);
		else if (pos_a > (mid_a) && pos_b > (mid_b))
			push_case_two(pos_a, pos_b, a, b);
		else
			push_case_three(pos_a, pos_b, a, b);
		mid_b = ((check_size(*b) / 2));
		mid_a = ((check_size(*a) / 2));
		pos_a = check_position(*a, winner);
		pos_b = check_position(*b, find_closest_smaller(winner, *b));
		if (winner > biggest_value(*b) || winner < smallest_value(*b))
				pos_b = check_position(*b, biggest_value(*b));
	}
}

void turk_push_b(t_stack**stack_a)
{
	t_stack *stack_b;
	int winner;

	winner = 0;
	stack_b = NULL;
	pb(stack_a, &stack_b);
	pb(stack_a, &stack_b);
	while (check_size(*stack_a) > 3)
	{
		winner = pick_winner(*stack_a, stack_b);
		print_test(*stack_a, stack_b);
		move_to_top(stack_a, &stack_b, winner);
		pb(stack_a, &stack_b);
		ft_printf("we moved : %d\n\n", winner);
	}
	sort_a(stack_a);
	sort_back_a(stack_a, &stack_b);
	bring_smaller_to_top(stack_a);
}