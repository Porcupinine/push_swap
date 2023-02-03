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
	int argccount = argc;
	int srgcount = 0;
	while (argccount > 0)
	{
		ft_printf("%s, ", argv[srgcount]);
		srgcount++;
		argccount --;
	}
	while (count >= 1)
	{
		if (is_str_number(argv[count]) != 0)
		{
			nbr = ft_atoi(argv[count]);
			if (*stack_a != NULL && check_for_repeat(*stack_a, nbr) == 1)
				return (ft_printf("Error repeated number\n"), 1);
			add_node(&stack_a, nbr);
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
	int ret;

	ret = 0;
	stack_a = NULL;
	if (argc < 2)
		return (ft_printf("Error argc too small\n"), 1);
	if (make_stack(argc, argv, &stack_a) == 1)
		return (ft_printf("Error making the stack"), 1);
//	while (count >= 1)
//	{
//		if (is_str_number(argv[count]) != 0)
//		{
//			nbr = ft_atoi(argv[count]);
//			if (stack_a != NULL && check_for_repeat(stack_a, nbr) == 1)
//				return (ft_printf("Error repeated number\n"), 1);
//			add_node(&stack_a, nbr);
//			count--;
//		}
//		else
//			return (ft_printf("Error not a number\n"), 1);
//	}
	ft_printf("lista original a\n");
	print_list(stack_a);
	ft_printf("sort result: %d", check_sort(stack_a));
	//call push_swap with the list
	return (0);
}

