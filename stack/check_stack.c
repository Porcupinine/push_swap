/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_stack.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 14:25:59 by lpraca-l      #+#    #+#                 */
/*   Updated: 2023/02/20 14:25:59 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "ft_printf.h"
#include <stdlib.h>

int check_sort(stack *head)
{
    while (head->next != NULL)
    {
        if (head->number < head->next->number)
            head = head->next;
        else
            return (1);
    }
    return (0);
}

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

int check_counter_sort(stack *head)
{
    if (head == NULL)
        return (0);
    while (head->next != NULL)
    {
        if (head->number > head->next->number)
            head = head->next;
        else
            return (1);
    }
    return (0);
}

int check_position(stack *head, int nbr)
{
    int position;

    position = 0;
    while (head->number != nbr)
    {
        head = head->next;
        position++;
    }
    return (position);
}

int check_size(stack *head)
{
    int size;

    size = 0;
    while (head != NULL)
    {
        head = head->next;
        size++;
    }
    return (size);
}