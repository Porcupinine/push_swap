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

static int is_str_number(char *str)
{
	int count;

	count = 0;
	if(str[0] == '-' || str[0] == '+')
		count++;
	while (str[count] != '\0')
	{
		if (ft_isdigit(str[count]) != 0)
			count++;
		else
			return (0);
	}
	return (1);
}

static int make_stack(int argc, char **argv, stack **stack_a)
{
	int count;
	int nbr;

	count = argc - 1;
	nbr = 0;
	while (count >= 1)
	{
		if (is_str_number(argv[count]) != 0)
		{
			nbr = ft_atoi(argv[count]);
			if (*stack_a != NULL && check_for_repeat(*stack_a, nbr) == 1)
				return (ft_printf("Error repeated number\n"), 1);
			add_node(stack_a, nbr);
			count--;
		}
		else
			return (ft_printf("Error not a number\n"), 1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	stack *stack_a;

	stack_a = NULL;
	if (argc < 2)
		return (1);
	if (make_stack(argc, argv, &stack_a) == 1)
		return (ft_printf("Error making the stack"), 1);
	ft_printf("smallest: %d\n", smallest_value(stack_a));
	ft_printf("biggest: %d\n", biggest_value(stack_a));
	push_swap(&stack_a, (argc - 1));
	return (0);
}

