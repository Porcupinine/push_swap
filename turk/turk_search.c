/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   turk_search.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 14:37:33 by lpraca-l      #+#    #+#                 */
/*   Updated: 2023/02/20 14:37:33 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "../include/turk.h"
#include "../include/stack.h"
#include "../printflibft/include/ft_printf.h"

int find_closest_smaller(int a_nbr, stack *stack_b)
{
    int smallest;

    smallest = smallest_value(stack_b);
    while (stack_b != NULL)
    {
        if(stack_b->number > smallest && stack_b->number < a_nbr)
        {
            smallest = stack_b->number;
            stack_b = stack_b->next;
        }
        else
            stack_b = stack_b->next;
    }
//    ft_printf("closest under %d is %d\n", a_nbr, smallest);
    return (smallest);
}

int find_closest_bigger(int a_nbr, stack *stack_b)
{
    int bigger;

    bigger = biggest_value(stack_b);
    while (stack_b != NULL)
    {
        if (stack_b->number <bigger && stack_b->number > a_nbr)
        {
            bigger = stack_b->number;
            stack_b = stack_b->next;
        }
        else
            stack_b = stack_b->next;
    }
//    ft_printf("closest above %d is %d\n", a_nbr, bigger);
    return (bigger);
}