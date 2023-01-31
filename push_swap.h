/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 11:21:39 by laura         #+#    #+#                 */
/*   Updated: 2023/01/30 11:21:39 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_PUSH_SWAP_H
#define PUSH_SWAP_PUSH_SWAP_H

typedef struct n_list
{
	int				number;
	struct n_list 	*next;
}n_list;

/**
 * print given list
 * @param head start of the list
 */
void print_list(n_list *head);
/**
 * create and add new node to the list
 * @param head pointer to the head of the list
 * @param nbr number to be added
 */
void add_node(n_list **head, int nbr);
/**
 * swap the first two elements of a list
 * @param head pointer to the head of the list
 */
void swap(n_list **head);
/**
 * take first element from a list and put it on the top
 * of another list
 * @param head pointer to the head of the list
 */
void push(n_list **head);
/**
 * shift all elements up by 1
 * @param head pointer to the head of the list
 */
void rotate(n_list **head);
/**
 *shift all elements 1down by
 * @param head pointer to the head of the list
 */
void reverse_rotate(n_list **head);
/**
 * sort a list of integers
 * @param head
 */
void push_swap(n_list **head);



#endif //PUSH_SWAP_PUSH_SWAP_H
