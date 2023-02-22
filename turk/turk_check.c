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

#include "../headers/turk.h"
#include "../headers/stack.h"
#include "ft_printf.h"

int determine_moves(int nbr, stack *stack_a, stack *stack_b)
{
    int moves;
    int under;

    moves  =  0;
    under = find_closest_bigger(nbr, stack_b);
    if (check_position(stack_a, nbr) < ((check_size(stack_a)/2)+1))
	{
		if (check_position(stack_b, under) > ((check_size(stack_b)/2)+1))
		{
			if (check_position(stack_a, nbr) > check_position(stack_b, under))
				moves = check_position(stack_a, nbr) + 1;
			else
				moves = check_position(stack_b, under) + 1;
		}
		else
			moves = check_position(stack_a, nbr) + check_position(stack_b, under) + 1;
	}
	else
	{
		if (check_position(stack_b, under) < ((check_size(stack_b)/2)+1))
		{
			if (check_position(stack_a, nbr) > check_position(stack_b, under))
				moves = check_position(stack_a, nbr);
			else
				moves = check_position(stack_b, under);
		}
		else
			moves = check_position(stack_a, nbr) + check_position(stack_b, under);
	}
	print_test(stack_a, stack_b);
	ft_printf("numer: %d\nunder: %d\nposition a: %d\nposition b: %d\nmoves: %d\n", nbr, under, check_position(stack_a, nbr), check_position(stack_b, under), moves);
		return (moves);
}
int pick_winner(stack *stack_a, stack *stack_b)
{
    int number;
    int moves;

    number = stack_a->number;
    moves = 0;
    while (stack_a != NULL)
    {

        if (determine_moves(number, stack_a, stack_b) < moves)
        {
            moves = determine_moves(number, stack_a, stack_b);
            number = stack_a->number;
        }
        else
            stack_a = stack_a->next;
    }
    return (number);
}