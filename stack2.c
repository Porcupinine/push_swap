/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack2.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 10:56:42 by laura         #+#    #+#                 */
/*   Updated: 2023/02/02 10:56:42 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"
#include <stdlib.h>

int check_for_repeat(stack *head, int nbr)
{
	while (head->next != NULL)
	{
		if (head->number == nbr)
			return (1);
		head = head->next;
	}
	if (head->number == nbr)
		return (1);
	return (0);
}
