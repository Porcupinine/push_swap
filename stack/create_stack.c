/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_stack.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lpraca-l <lpraca-l@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/17 15:37:13 by lpraca-l      #+#    #+#                 */
/*   Updated: 2023/02/17 15:37:13 by lpraca-l      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/turk.h"
#include "../include/stack.h"
#include "ft_printf.h"
#include "libft.h"

static void add_node(stack **head, int nbr)
{
    stack *n_nbr;

    n_nbr = malloc(1 * sizeof(stack));
    if (n_nbr == NULL)
        return ;
    n_nbr->number = nbr;
    n_nbr->next = *head;
    *head = n_nbr;
}

static int is_str_number(char *str)
{
    int count;

    count = 0;
    if(str[0] == '-' || str[0] == '+')
    {
        if (str[1] == '\0')
            return (0);
        count++;
    }
    while (str[count] != '\0')
    {
        if (ft_isdigit(str[count]) != 0)
            count++;
        else
            return (0);
    }
    return (1);
}

static int arr_size(char **arr)
{
    int count;

    count = 0;
    while (arr[count] != NULL)
        count++;
    return(count);
}

static int check_add_node(char **arr, stack **stack_a)
{
    int count_arr;
    int nbr;

    count_arr = arr_size(arr) -1;
    nbr = 0;
    while (count_arr >= 0)
    {
        if (is_str_number(arr[count_arr]) != 0)
        {
            nbr = ft_atoi(arr[count_arr]);
            if (*stack_a != NULL && check_for_repeat(*stack_a, nbr) == 1)
                return (ft_printf("Error arrr\n"), 1);
            add_node(stack_a, nbr);
            count_arr--;
        }
        else
            return (ft_printf("not number\n"), 1);
    }
    return (0);
}

int make_stack(int argc, char **argv, stack **stack_a)
{
    int count;
    int nbr;
    char **real_argv;

    count = argc - 1;
    nbr = 0;
    while (count >= 1)
    {
            real_argv = ft_split(argv[count], ' ');
            if (check_add_node(real_argv, stack_a) == 1)
                return (ft_printf("Error repeated number\n"), 1);
            count--;
    }
    return (0);
}
