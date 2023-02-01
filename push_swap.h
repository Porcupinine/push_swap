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

typedef struct stack
{
	int				number;
	struct stack 	*next;
}stack;

/**
 * print given list
 * @param head start of the list
 */
void print_list(stack *head);
/**
 * create and add new node to the list
 * @param head pointer to the head of the list
 * @param nbr number to be added
 */
void add_node(stack **head, int nbr);
/**
 * swap the first two elements of a list
 * @param head pointer to the head of the list
 */
void swap(stack **head);
/**
 * Finds the last node
 * @param head pointer to the start of the list
 * @return last node
 */
stack *find_last(stack *head);
/**
 * finds penultimate node
 * @param head popinter to the star of the list
 * @return penultimate node
 */
stack *find_penultimate(stack *head);
/**
 * take first element from a list and put it on the top
 * of another list
 * @param head_x pointer to the head of the list x
 * @param head_y pointer to the head of the list y
 */
void push(stack **head_x, stack **head_y);
/**
 * shift all elements up by 1
 * @param head pointer to the head of the list
 */
void rotate(stack **head);
/**
 *shift all elements 1down by
 * @param head pointer to the head of the list
 */
void reverse_rotate(stack **head);
/**
 * sort a list of integers
 * @param head
 */
void push_swap(stack **head);



#endif //PUSH_SWAP_PUSH_SWAP_H
