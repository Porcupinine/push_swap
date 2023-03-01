/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_back.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/01 14:43:29 by laura         #+#    #+#                 */
/*   Updated: 2023/03/01 14:43:29 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/turk.h"
#include "../include/stack.h"
#include "../printflibft/include/ft_printf.h"

void sort_back_a(stack **a, stack **b)
{
	int under;

	under = find_closest_bigger(&b, (*b)->number);
	while (b != NULL)
	{

	}
}

