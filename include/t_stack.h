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


#ifndef PUSH_SWAP_T_STACK_H
#define PUSH_SWAP_T_STACK_H

typedef struct t_stack
{
	int				number;
	struct t_stack 	*next;
}t_stack;

void free_stack(t_stack **head);
void free_real_argv(char **real_argv);

//---------------------------------------------------------------create_stack.c
/**
 * Creates a stck with data from command line.
 * Data must be treated if it's passed as a single string, multiple
 * stings, or just different arguments.
 * @param argc number of arguments
 * @param argv list of arguments
 * @param stack_a new stack
 * @return the new stack
 */
int make_stack(int argc, char **argv, t_stack **stack_a);

//----------------------------------------------------------------check_stack.c
int check_for_repeat(t_stack *head, int nbr);
/**
 * check if stak is sorted from biggest to smallest
 * @param head pointer to the head of stack
 * @return 0 if ok 1 if not sorted
 */
int check_counter_sort(t_stack *head);
/**
 * finds node position
 * @param head pointer to the top of the stack
 * @param nbr number to search
 * @return position
 */
int check_position(t_stack *head, int nbr);
/**
 * check if the stack is sorted
 * @param head pointer to the top of the stack
 * @return 0 if sorted or 1 if not sorted
 */
int check_sort(t_stack *head);
/**
 * returns the amount of element on the stack
 * @param head pointer to the head  of the stack
 * @return size of the stack
 */
int check_size(t_stack *head);

//---------------------------------------------------------------search_stack.c
/**
 * Finds the smalles value on the stack
 * @param head pointer to the head of the stack
 * @return smallest value
 */
int smallest_value(t_stack *head);
/**
 * Finds the biggesr value on the stack
 * @param head pointer to the head of the stack
 * @return the biggest value
 */
int biggest_value(t_stack *head);
/**
 * Finds the last node
 * @param head pointer to the start of the list
 * @return last node
 */
t_stack *find_last(t_stack *head);
/**
 * finds penultimate node
 * @param head popinter to the star of the list
 * @return penultimate node
 */
t_stack *find_penultimate(t_stack *head);

//----------------------------------------------------------------------stack.c
/**
 * print given list
 * @param head start of the list
 */
void print_stack(t_stack *head);
/**
 * print both stacks
 * @param stack_a
 * @param stack_b
 */
void print_test(t_stack *stack_a, t_stack *stack_b);

//-----------------------------------------------------------------------swap.c
/**
 * swap the first two elements of a list
 * @param head pointer to the head of the list
 */
void swap(t_stack **head);
/**
 * swap a
 * @param stack_a
 */
void sa(t_stack **stack_a);
/**
 * swap b
 * @param stack_b
 */
void sb(t_stack **stack_b);
/**
 * swap a and b at the same time
 * @param stack_a
 * @param stack_b
 */
void ss(t_stack **stack_a, t_stack **stack_b);

//-----------------------------------------------------------------------push.c
/**
 * take first element from a list and put it on the top
 * of another list
 * @param head_x pointer to the head of the list x
 * @param head_y pointer to the head of the list y
 */
void push(t_stack **head_x, t_stack **head_y);
/**
 * push from b to a
 * @param stack_a
 * @param stack_b
 */
void pa(t_stack **stack_a, t_stack **stack_b);
/**
 * push from a to b
 * @param stack_a
 * @param stack_b
 */
void pb(t_stack **stack_a, t_stack **stack_b);

//---------------------------------------------------------------------rotate.c
/**
 * shift all elements up by 1
 * @param head pointer to the head of the list
 */
void rotate(t_stack **head);
/**
 * rotate a
 * @param stack_a
 */
void ra(t_stack **stack_a);
/**
 * rotate b
 * @param stack_b
 */
void rb(t_stack **stack_b);
/**
 * rotate a and b
 * @param stack_a
 * @param stack_b
 */
void rr(t_stack **stack_a, t_stack **stack_b);

//-------------------------------------------------------------reverse_rotate.c
/**
 *shift all elements 1down by
 * @param head pointer to the head of the list
 */
void reverse_rotate(t_stack **head);
/**
 * reverse rotate a
 * @param stack_a
 */
void rra(t_stack **stack_a);
/**
 * reverse rotate b
 * @param stack_b
 */
void rrb(t_stack **stack_b);
/**
 * reverse rotate a and b
 * @param stack_a
 * @param stack_b
 */
void rrr(t_stack **stack_a, t_stack **stack_b);

#endif //PUSH_SWAP_T_STACK_H
