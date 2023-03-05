/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 13:05:08 by laura         #+#    #+#                 */
/*   Updated: 2023/01/30 13:05:08 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/turk.h"
#include "include/stack.h"
#include "printflibft/include/ft_printf.h"

int main(int argc, char **argv)
{
	stack *stack_a;

	stack_a = NULL;
	if (argc < 2)
		return (1);
	if (make_stack(argc, argv, &stack_a) == 1)
		return (ft_printf("Error"), 1);
	turk_push_b(&stack_a);
	return (0);
}

