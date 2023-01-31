/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list .c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 16:08:11 by laura         #+#    #+#                 */
/*   Updated: 2023/01/30 16:08:11 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"
#include <stdlib.h>

void add_node(n_list **head, int nbr)
{
	n_list *n_nbr;

//	if (nList == 0 || nbr == NULL)
//		return ;
	n_nbr = malloc(1 * sizeof(n_list));
	if (n_nbr == NULL)
		return ;
	n_nbr->number = nbr;
	n_nbr->next = *head;
	*head = n_nbr;
}

void print_list(n_list *nList)
{
	while (nList != NULL)
	{
		ft_printf("Node value :%d\n", nList->number);
		nList = nList->next;
	}
}

//void	ft_lstadd_front(t_list **lst, t_list *new_node)
//{
//	if (lst == NULL || new_node == NULL)
//		return ;
//	new_node->next = *lst;
//	*lst = new_node;
//}
//t_list	*ft_lstnew(void *content)
//{
//	t_list	*new_item;
//
//	new_item = malloc(1 * sizeof(t_list));
//	if (new_item == NULL)
//		return (NULL);
//	new_item->content = content;
//	new_item->next = NULL;
//	return (new_item);
//}