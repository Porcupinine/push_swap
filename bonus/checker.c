/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/22 14:05:09 by laura         #+#    #+#                 */
/*   Updated: 2023/03/22 14:05:09 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "../printflibft/include/libft.h"
#include "../include/t_stack.h"
#include "../printflibft/include/ft_printf.h"
#include "../printflibft//include/get_next_line.h"


void move(t_stack **a, const char *movement)
{
	t_stack  *b;

	b  = NULL;
	if(ft_strncmp(movement, "sa\n", 3))
		return(sa(a));
	if(ft_strncmp(movement, "sb\n", 3))
		return(sb(&b));
	if(ft_strncmp(movement, "pa\n", 3))
		return(pa(a, &b));
	if(ft_strncmp(movement, "ss\n", 3))
		return(ss(a, &b));
	if(ft_strncmp(movement, "pb\n", 3))
		return(pb(a, &b));
	if(ft_strncmp(movement, "ra\n", 3))
		return(ra(a));
	if(ft_strncmp(movement, "rb\n", 3))
		return(rb(&b));
	if(ft_strncmp(movement, "rr\n", 3))
		return(rr(a, &b));
	if(ft_strncmp(movement, "rra\n", 4))
		return(rra(a));
	if(ft_strncmp(movement, "rrb\n", 4))
		return(rrb(&b));
	if(ft_strncmp(movement, "rrr\n", 4))
		return(rrr(a, &b));
}

int main (int argc, char **argv)
{
	t_stack *a;
	char *movement;


	a = NULL;
	movement = ft_calloc(1, sizeof (char));
	if (movement == NULL)
		return (0);
	if (argc < 2)
		return (1); // print error
	if (make_stack(argc, argv, &a) == 1)
		return (ft_printf("Error"), 1);
	while (1) //???????????????????????????????????
	{
		movement = get_next_line(0);
		if (ft_strncmp(movement, "\n", 1))
			break;
		move(&a, movement);
		free(movement);
	}
	if(check_sort(a) != 0)
		return (ft_printf("KO"), 1);
	return (ft_printf("OK"), 0);
}
