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

int main(int argc, char **argv)
{
	int count;
	int nbr;

	count = argc - 1;
	nbr = 0;
	n_list *stack_a = NULL;
	if (argc < 2)
	{
		ft_printf("Error argc too small\n");
		return (1);
	}
	while (count >= 1)
	{
		if (is_str_number(argv[count]) != 0)
		{
			nbr = ft_atoi(argv[count]);
			add_node(&stack_a, nbr);
			count--;
		}
		else
		{
			ft_printf("Error not a number\n");
			ft_lstclear()
			return (1);
		}
	}
	print_list(stack_a);
	push_swap(&stack_a);
	//call push_swap with the list
	return (0);
}

