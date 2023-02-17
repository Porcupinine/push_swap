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

#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"

int main(int argc, char **argv)
{
	stack *stack_a;

	stack_a = NULL;
	if (argc < 2)
		return (1);
	if (make_stack(argc, argv, &stack_a) == 1)
		return (ft_printf("Error making the stack"), 1);
//	ft_printf("smallest: %d\n", smallest_value(stack_a));
//	ft_printf("biggest: %d\n", biggest_value(stack_a));
    print_stack(stack_a);
//	push_swap(&stack_a, (argc - 1));
	sort_turk(&stack_a);
	return (0);
}

