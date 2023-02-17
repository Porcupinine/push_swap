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
//-----------------stack2.c------------------
/**
 * Check if the number already exists
 * @param head pointer to the top of the stack
 * @param nbr number to check
 * @return 0 if it does not exist or 1 if it does
 */
int check_for_repeat(stack *head, int nbr);
/**
 * Finds the smalles value on the stack
 * @param head pointer to the head of the stack
 * @return smallest value
 */
int smallest_value(stack *head);
/**
 * Finds the biggesr value on the stack
 * @param head pointer to the head of the stack
 * @return the biggest value
 */
int biggest_value(stack *head);
/**
 * check if stak is sorted from biggest to smallest
 * @param head pointer to the head of stack
 * @return 0 if ok 1 if not sorted
 */
int check_counter_sort(stack *head);
/**
 * finds node position
 * @param head pointer to the top of the stack
 * @param nbr number to search
 * @return position
 */
int check_position(stack *head, int nbr);

//-----------------stack.c-------------------
/**
 * print given list
 * @param head start of the list
 */
void print_stack(stack *head);
/**
 * create and add new node to the list
 * @param head pointer to the head of the list
 * @param nbr number to be added
 */
void add_node(stack **head, int nbr);
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
 * check if the stack is sorted
 * @param head pointer to the top of the stack
 * @return 0 if sorted or 1 if not sorted
 */
int check_sort(stack *head);

//----------------rules.c--------------------
/**
 * swap the first two elements of a list
 * @param head pointer to the head of the list
 */
void swap(stack **head);
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

//----------------push_swap.c-----------------
/**
 * sort a list of integers
 * @param head
 */
void push_swap(stack **head, int stack_size);

void sort_turk(stack **stack_a);

#endif //PUSH_SWAP_PUSH_SWAP_H
