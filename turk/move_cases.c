/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   move_rules.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/10 10:31:00 by laura         #+#    #+#                 */
/*   Updated: 2023/03/10 10:31:00 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/turk.h"
#include "../include/t_stack.h"
#include "../printflibft/include/ft_printf.h"
#include "../printflibft/include/libft.h"

//extern char *cases;

int move_case_zero(int pos_a, int size_a)
{
//	char* aux = ft_strjoin(cases, "move_case_zero\n"); free(cases); cases = aux;
//	ft_printf("case zero\n");
	if (pos_a <= ((size_a / 2)+1))
		return (pos_a + 1);
	return (size_a - pos_a + 1);
}

int move_case_one(int position_a, int position_b)
{
	int moves;

	moves = 0;
//	char* aux = ft_strjoin(cases, "move_case_one\n"); free(cases); cases = aux;
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

int move_case_two(int position_a, int position_b, int size_a, int size_b)
{
	int moves;

	moves = 0;
//	char* aux = ft_strjoin(cases, "move_case_two\n"); free(cases); cases = aux;
	if (position_a > position_b)
	{
		moves = size_a - position_a + 1;
	}
	else
	{
		moves = size_b - position_b + 1;
	}
	return (moves);
}
int move_case_three(int pos_a, int pos_b, int size_a, int size_b)
{
	int moves;

	moves = 0;
//	char* aux = ft_strjoin(cases, "move_case_three\n"); free(cases); cases = aux;
	if (pos_a <= ((size_a/2)+1)  && pos_b > ((size_b/2)+1))
	{
		if(pos_b <= (pos_a + size_b - pos_b))
		{
//			ft_printf("fun new move case\n");
//			ft_printf("pos_a: %d\npos_b: %d\nsize_a: %d\nsize_b: %d\n", pos_a, pos_b, size_a, size_b);
			moves = pos_b + 1;
		}
		else if((size_a - pos_a) < (pos_a + size_b - pos_b))
			moves = size_a - pos_a + 1;
		else
			moves = pos_a + size_b - pos_b + 1;
	}
	else
	{
		if(pos_a <= (pos_b + size_a - pos_a)) {
//			ft_printf("fun new move case\n");
//			ft_printf("pos_a: %d\npos_b: %d\nsize_a: %d\nsize_b: %d\n", pos_a, pos_b, size_a, size_b);
			moves = pos_a + 1;
		}
		else  if ((size_b - pos_b) <= (pos_b + size_a - pos_a))
			moves = size_b - pos_b + 1;
		else
			moves = (size_a - pos_a) + pos_b + 2;
	}
	return (moves);
}
