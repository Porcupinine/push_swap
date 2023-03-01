/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   turk_check.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 14:49:34 by lpraca-l      #+#    #+#                 */
/*   Updated: 2023/02/20 14:49:34 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/turk.h"
#include "../include/stack.h"
#include "ft_printf.h"

static int case_one (int position_a, int position_b)
{
	int moves;

	moves = 0;
	if (position_a > position_b)
	{
		moves = position_a + 1;
	}
	else
	{
		moves = position_b + 1;
	}
	return (moves);
}

static int case_two (int position_a, int position_b)
{
	int moves;

	moves = 0;
	if (position_a > position_b)
	{
		moves = position_a + 1;
	}
	else
	{
		moves = position_b + 1;
	}
	return (moves);
}

static int case_three(int position_a, int position_b, int size_a, int size_b)
{
	int moves;

	moves = 0;
	if (position_a < ((size_a / 2) + 1) &&  position_b >= ((size_b / 2) + 1))
	{
		moves = position_a + size_b - position_b + 1;
	}
	else
	{
		moves = (size_a - position_a) + position_b + 2;
	}
	return (moves);
}

static int determine_moves(int nbr, int position_a, int size_a, stack *stack_b)
{
    int under;
	int position_b;
	int size_b;

    under = find_closest_smaller(nbr, stack_b);
	position_b = check_position(stack_b, under);
	size_b = check_size(stack_b);
	if (position_a < ((size_a/2)+1) && position_b < ((size_b/2)+1))
		return (case_one(position_a, position_b));
	else if (position_a > ((size_a/2)+1) && position_b > ((size_b/2)+1))
		return (case_two(position_a, position_b));
	else
		return (case_three(position_a, position_b, size_a, size_b));
}

int pick_winner(stack *stack_a, stack *stack_b)
{
    int number;
    int moves;
	int position_a;
	int size_a;

    number = stack_a->number;
    moves = 0;
	position_a = 0;
	size_a = check_size(stack_a);
    while (stack_a != NULL)
    {
        if (determine_moves(stack_a->number, position_a, size_a, stack_b) < moves)
        {
            moves = determine_moves(stack_a->number, position_a, size_a, stack_b);
            number = stack_a->number;
        }
        else
            stack_a = stack_a->next;
		position_a++;
    }
    return (number);
}