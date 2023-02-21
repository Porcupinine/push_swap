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

#include "../headers/push_swap.h"
#include "../headers/stack.h"
#include "ft_printf.h"

int determine_moves(int nbr, stack *stack_a, stack *stack_b)
{
    int moves;
    int under;

    moves  =  0;
    under = find_closest_bigger(nbr, stack_b);
    while (stack_b->number != under && stack_a->number != nbr)
    {
        if (check_position(stack_a, nbr) < (check_size(stack_a)/2) +1)
        {
            if (check_position(stack_b, under) < (check_size(stack_b)/2) +1)
            {
				rrr(stack_a, stack_b);
                moves++;
            }
            else
            {
				rra(stack_a);
				moves++;
			}
        }
        else
        {
            if (check_position(stack_b, under) > (check_size(stack_b)/2) +1)
            {
				rr(stack_a, stack_b);
                moves++;
            }
            else
            {
                ra(stack_a);
                moves++;
            }
        }


    }

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
        if (determine_moves(number, stack_b) < moves)
        {
            moves = determine_moves(number, stack_a, stack_b);
            number = stack_a->number;
        }
        else
            stack_a = stack_a->next;
    }
    return (number);
}