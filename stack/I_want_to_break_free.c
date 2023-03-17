/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   I_want_to_break_free.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/05 13:16:41 by laura         #+#    #+#                 */
/*   Updated: 2023/03/05 13:16:41 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/turk.h"
#include "../include/t_stack.h"
#include "../printflibft/include/ft_printf.h"
#include "../printflibft/include/libft.h"

void free_stack(t_stack**head)
{
	t_stack*temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

void free_real_argv(char **real_argv)
{
	int count_real;

	count_real = 0;
	while (real_argv[count_real] != NULL)
	{
		free(real_argv[count_real]);
		count_real++;
	}
	free(real_argv);
}
