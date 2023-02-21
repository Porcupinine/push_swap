/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 11:11:32 by laura         #+#    #+#                 */
/*   Updated: 2023/02/21 11:11:32 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_STACK_H
#define PUSH_SWAP_STACK_H

typedef struct stack
{
	int				number;
	struct stack 	*next;
}stack;

//----------------create_stack.c---------------
/**
 * Creates a stck with data from command line.
 * Data must be treated if it's passed as a single string, multiple
 * stings, or just different arguments.
 * @param argc number of arguments
 * @param argv list of arguments
 * @param stack_a new stack
 * @return the new stack
 */
int make_stack(int argc, char **argv, stack **stack_a);

//-----------------check_stack.c------------------
/**
 * Check if the number already exists
 * @param head pointer to the top of the stack
 * @param nbr number to check
 * @return 0 if it does not exist or 1 if it does
 */
int check_for_repeat(stack *head, int nbr);
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
/**
 * check if the stack is sorted
 * @param head pointer to the top of the stack
 * @return 0 if sorted or 1 if not sorted
 */
int check_sort(stack *head);
/**
 * returns the amount of element on the stack
 * @param head pointer to the head  of the stack
 * @return size of the stack
 */
int check_size(stack *head);

//-----------------search_stack.c--------------
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

//-----------------stack.c-------------------
/**
 * print given list
 * @param head start of the list
 */
void print_stack(stack *head);
/**
 * print both stacks
 * @param stack_a
 * @param stack_b
 */
void print_test(stack *stack_a, stack *stack_b);

//----------------swap.c--------------------
/**
 * swap the first two elements of a list
 * @param head pointer to the head of the list
 */
void swap(stack **head);
/**
 * swap a
 * @param stack_a
 */
void sa(stack **stack_a);
/**
 * swap b
 * @param stack_b
 */
void sb(stack **stack_b);
/**
 * swap a and b at the same time
 * @param stack_a
 * @param stack_b
 */
void ss(stack **stack_a, stack **stack_b);

//----------------push.c---------------------
/**
 * take first element from a list and put it on the top
 * of another list
 * @param head_x pointer to the head of the list x
 * @param head_y pointer to the head of the list y
 */
void push(stack **head_x, stack **head_y);
/**
 * push from b to a
 * @param stack_a
 * @param stack_b
 */
void pa(stack **stack_a, stack **stack_b);
/**
 * push from a to b
 * @param stack_a
 * @param stack_b
 */
void pb(stack **stack_a, stack **stack_b);

//-----------------rotate.c---------------------
/**
 * shift all elements up by 1
 * @param head pointer to the head of the list
 */
void rotate(stack **head);
/**
 * rotate a
 * @param stack_a
 */
void ra(stack **stack_a);
/**
 * rotate b
 * @param stack_b
 */
void rb(stack **stack_b);
/**
 * rotate a and b
 * @param stack_a
 * @param stack_b
 */
void rr(stack **stack_a, stack **stack_b);

//-----------------reverse_rotate.c---------------
/**
 *shift all elements 1down by
 * @param head pointer to the head of the list
 */
void reverse_rotate(stack **head);
/**
 * reverse rotate a
 * @param stack_a
 */
void rra(stack **stack_a);
/**
 * reverse rotate b
 * @param stack_b
 */
void rrb(stack **stack_b);
/**
 * reverse rotate a and b
 * @param stack_a
 * @param stack_b
 */
void rrr(stack **stack_a, stack **stack_b);

#endif //PUSH_SWAP_STACK_H
