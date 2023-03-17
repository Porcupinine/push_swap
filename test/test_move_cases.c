
#include "../include/turk.h"
#include "../include//t_stack.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *cases;

void test_move_cases()
{
	t_stack* stackA;
	t_stack* stackB;
	char** argv = malloc(2 * sizeof(char*));
	argv[0] = "./push_swap";

//--------------test 1----------------------
	cases = calloc(1, sizeof(char*));
	if (cases == NULL)
		return ;
	char *answer1 = "move_case_zero\n"
					"move_case_one\n"
					"move_case_zero\n"
					"move_case_zero\n"
					"move_case_three\n"
					"move_case_zero\n"
					"move_case_zero\n";
	argv[1] = "123 200 140 771 271 832 37";
	make_stack(2, argv, &stackA);
	argv[1] = "759 178";
	make_stack(2, argv, &stackB);
	pick_winner(stackA, stackB);
	assert(strcmp(cases, answer1) == 0);
	free_stack(&stackA);
	free_stack(&stackB);
	free(cases);
	stackA = NULL;
	stackB = NULL;
	cases = NULL;

//--------------test 2-----------------------
	cases = calloc(1, sizeof(char*));
	if (cases == NULL)
		return ;
	char *answer2 = "move_case_one\n"
					"move_case_one\n"
					"move_case_one\n"
					"move_case_one\n"
					"move_case_one\n"
					"move_case_two\n"
					"move_case_zero\n"
					"move_case_three\n";
	argv[1] = "300 142 925 850 205 80 37 100";
	make_stack(2, argv, &stackA);
	argv[1] = "1001 86 40";
	make_stack(2, argv, &stackB);
	pick_winner(stackA, stackB);
	printf("cases\n%s\n answer\n%s\n", cases, answer2);
	assert(strcmp(cases, answer2) == 0);
	free_stack(&stackA);
	free_stack(&stackB);
	free(cases);
	stackA = NULL;
	stackB = NULL;
	cases = NULL;

//--------------test 3-----------------------
	cases = calloc(1, sizeof(char*));
	if (cases == NULL)
		return ;
	char *answer3 = "move_case_one\n"
					"move_case_three\n"
					"move_case_one\n"
					"move_case_three\n"
					"move_case_one\n"
					"move_case_zero\n"
					"move_case_zero\n"
					"move_case_three\n"
					"move_case_two\n"
					"move_case_two\n";
	argv[1] = "90 25 102 40 80 -17 -200 300 24 1";
	make_stack(2, argv, &stackA);
	argv[1] = "74 1001 -5";
	print_test(stackA, stackB);
	make_stack(2, argv, &stackB);
	pick_winner(stackA, stackB);
//	printf("cases\n%s\n answer\n%s\n", cases, answer3);
	assert(strcmp(cases, answer3) == 0);
	free_stack(&stackA);
	free_stack(&stackB);
	free(cases);
	stackA = NULL;
	stackB = NULL;
	cases = NULL;
}
