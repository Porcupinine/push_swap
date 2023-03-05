/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_stack.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 14:28:27 by lpraca-l      #+#    #+#                 */
/*   Updated: 2023/02/20 14:28:27 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include//turk.h"
#include "../include/stack.h"
#include "../printflibft/include/ft_printf.h"

stack *find_last(stack *head)
{
    while (head->next != NULL)
    {
        head = head->next;
    }
    return (head);
}

stack *find_penultimate(stack *head)
{
    while (head->next->next != NULL)
    {
        head = head->next;
    }
    return (head);
}

int biggest_value(stack *head)
{
    int biggest;

    biggest = head->number;
    while (head->next != NULL)
    {
        if (head->number > biggest)
            biggest = head->number;
        head = head->next;
    }
    if (head->number > biggest)
        biggest = head->number;
    return (biggest);
}

int smallest_value(stack *head)
{
    int smallest;

    smallest = head->number;
    while (head->next != NULL)
    {
        if (head->number < smallest)
            smallest = head->number;
        head = head->next;
    }
    if (head->number < smallest)
        smallest = head->number;
    return (smallest);
}