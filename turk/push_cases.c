/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_cases.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/10 10:38:08 by laura         #+#    #+#                 */
/*   Updated: 2023/03/10 10:38:08 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include//turk.h"
#include "../include//t_stack.h"
#include "../printflibft/include/ft_printf.h"
#include "../printflibft/include/libft.h"

//extern char *test_moves;

void push_case_zero(int position_a, t_stack**a)
{
	int size_a;

	size_a = check_size(*a);
	if (position_a != 0 && position_a > (size_a/2))
	{
//		char* aux = ft_strjoin(test_moves, "rra\n"); free(test_moves); test_moves = aux;
		rra(a);
	}
	else if (position_a != 0 && position_a <= ((size_a/2)))
	{
//		char* aux = ft_strjoin(test_moves, "ra\n"); free(test_moves); test_moves = aux;
		ra(a);
	}
}

void push_case_one(int position_a, int position_b, t_stack**a, t_stack**b)
{
	if (position_a != 0 && position_b != 0)
	{
//		char* aux = ft_strjoin(test_moves, "rr\n"); free(test_moves); test_moves = aux;
		rr(a, b);
	}
	else if (position_a != 0)
	{
//		char* aux = ft_strjoin(test_moves, "ra\n"); free(test_moves); test_moves = aux;
		ra(a);
	}
	else
	{
//		char* aux = ft_strjoin(test_moves, "rb\n"); free(test_moves); test_moves = aux;
		rb(b);
	}
}

void push_case_two(int position_a, int position_b, t_stack**a, t_stack**b)
{
	if (position_a != 0 && position_b != 0)
	{
//		char* aux = ft_strjoin(test_moves, "rrr\n"); free(test_moves); test_moves = aux;
		rrr(a, b);
	}
	else if (position_a != 0)
	{
//		char* aux = ft_strjoin(test_moves, "rra\n"); free(test_moves); test_moves = aux;
		rra(a);
	}
	else
	{
//		char* aux = ft_strjoin(test_moves, "rrb\n"); free(test_moves); test_moves = aux;
		rrb(b);
	}
}

void push_case_three (int pos_a, int pos_b, t_stack**a, t_stack**b)
{
	int size_a;
	int size_b;

	size_a = check_size(*a);
	size_b = check_size(*b);
//	ft_printf("pos_a: %d\npos_b: %d\nsize_a: %d\nsize_b: %d\n", pos_a, pos_b, size_a, size_b);
	if (pos_a <= ((size_a/ 2))   && pos_b > ((size_b/ 2)))
	{
		if(pos_a != 0 && pos_b != 0 && pos_b <= pos_a + (size_b - pos_b)) {
//			ft_printf("posb %d    posa %d    sizeb %d\n", pos_b, pos_a, size_b);
//			char* aux = ft_strjoin(test_moves, "rr\n"); free(test_moves); test_moves = aux;
			rr(a, b);
		}
		else if(pos_a != 0 && pos_b != 0 && (size_a - pos_a) <= pos_a + (size_b - pos_b))
		{
//			char* aux = ft_strjoin(test_moves, "rrr\n"); free(test_moves); test_moves = aux;
			rrr(a,b);
		}
		else {
//			ft_printf("not that fun\n");
			push_case_four(pos_a, pos_b, a, b);
		}
	}
	else
	{
		if(pos_a != 0 && pos_b != 0 && pos_a <= pos_b + (size_a - pos_a))
		{
//			ft_printf("new case\n");
//			char* aux = ft_strjoin(test_moves, "rrr\n"); free(test_moves); test_moves = aux;
			rrr(a,b);
		}
		else  if (pos_a != 0 && pos_b != 0 && (size_b - pos_b) <= pos_b + (size_a - pos_a))
		{
//			char* aux = ft_strjoin(test_moves, "rr\n"); free(test_moves); test_moves = aux;
			rr(a,b);
		}
		else
		{
//			ft_printf("not that fun\n");
			push_case_four(pos_a, pos_b, a, b);
		}
	}
}

void push_case_four(int position_a, int position_b, t_stack**a, t_stack**b)
{
	int size_a;
	int size_b;

	size_a = check_size(*a);
	size_b = check_size(*b);
//	ft_printf("case four\n");
	if (position_a != 0 && position_a > ((size_a/ 2)))
	{
//		char* aux = ft_strjoin(test_moves, "rra\n"); free(test_moves); test_moves = aux;
		rra(a);
	}
	else if (position_b  != 0 && position_b > ((size_b/ 2)))
	{
//		char* aux = ft_strjoin(test_moves, "rrb\n"); free(test_moves); test_moves = aux;
		rrb(b);
	}
	else if (position_a != 0 && position_a <= ((size_a/ 2)))
	{
//		char* aux = ft_strjoin(test_moves, "ra\n"); free(test_moves); test_moves = aux;
		ra(a);
	}
	else if (position_b != 0 && position_b <= ((size_b/ 2)))
	{
//		char* aux = ft_strjoin(test_moves, "rb\n"); free(test_moves); test_moves = aux;
		rb(b);
	}
}
