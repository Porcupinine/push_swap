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
#include "ft_printf.h"

void swap(stack **head)
{
    stack *tmp;
	stack *n2;

	n2 = (*head)->next;
    tmp = n2->next;
	n2->next = (*head);
	(*head)->next = tmp;
	*head = n2;
}

void push(stack **head_x, stack **head_y)
{
	stack *x2;

	x2 = (*head_x)->next;
	(*head_x)->next = *head_y;
	*head_y = *head_x;
	*head_x =  x2;

}

void rotate(stack **head)
{
    stack *last;
	stack *n2;

	n2 = (*head)->next;
    last = find_last(*head);
	last->next = *head;
	(*head)->next = NULL;
	*head = n2;
}

void reverse_rotate(stack **head)
{
	stack *last;
	stack *penultimate;

	last = find_last(*head);
	penultimate = find_penultimate(*head);
	last->next = *head;
	penultimate->next = NULL;
	*head = last;
}
