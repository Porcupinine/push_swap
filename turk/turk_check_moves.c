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
#include "../include/t_stack.h"
#include "../printflibft/include/ft_printf.h"

int determine_moves(int nbr, int position_a, int size_a, t_stack*b)
{
    int under;
	int position_b;
	int size_b;

    under = find_closest_smaller(nbr, b);
	position_b = check_position(b, under);
	size_b = check_size(b);
	if (nbr < smallest_value(b) || nbr > biggest_value(b))
	{
		under = biggest_value(b);
		position_b = check_position(b, under);
	}
	if (position_a <= ((size_a/2)+1)  && position_b <= ((size_b/2)+1))
		return (move_case_one(position_a, position_b));
	else if (position_a > ((size_a/2)+1)  && position_b > ((size_b/2+1)))
		return (move_case_two(position_a, position_b, size_a, size_b));
	else
		return (move_case_three(position_a, position_b, size_a, size_b));
}

int pick_winner(t_stack*a, t_stack*b)
{
	static int final_move = 0;
    int number;
    int moves;
	int position_a;
	int size_a;

    number = a->number;
	position_a = 0;
	size_a = check_size(a);
	moves = determine_moves(a->number, position_a, size_a, b);
	position_a++;
	a = a->next;
    while (a != NULL)
    {
        if (determine_moves(a->number, position_a, size_a, b) < moves)
        {
            moves = determine_moves(a->number, position_a, size_a, b);
			number = a->number;
        }
		a = a->next;
		position_a++;
    }
	final_move = final_move + moves;
    return (number);
}