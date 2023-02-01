/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rules.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 19:33:19 by laura         #+#    #+#                 */
/*   Updated: 2023/01/30 19:33:19 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include "libft.h"

void swap(n_list **head)
{
    n_list *tmp;
	n_list *n2;

	n2 = (*head)->next;
    tmp = (*head)->next;
	(*head)->next = n2->next;
    n2->next = tmp;
}

void push(n_list **head_x, n_list **head_y)
{

}

void rotate(n_list **head)
{
    n_list last;
    last = ft_lstlast()


}

void reverse_rotate(n_list **head)
{

}
