
#include "../include/turk.h"
#include "../include//t_stack.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/test.h"

char *cases;

void test_move_cases()
{
	t_stack* stackA;
	t_stack* stackB;
	char** argv = malloc(2 * sizeof(char*));
	argv[0] = "./push_swap";
//
////--------------test 1----------------------
//	cases = calloc(1, sizeof(char*));
//	if (cases == NULL)
//		return ;
//	char *answer1 = "move_case_zero\n"
//					"move_case_one\n"
//					"move_case_zero\n"
//					"move_case_zero\n"
//					"move_case_three\n"
//					"move_case_zero\n"
//					"move_case_zero\n";
//	argv[1] = "123 200 140 771 271 832 37";
//	make_stack(2, argv, &stackA);
//	argv[1] = "759 178";
//	make_stack(2, argv, &stackB);
//	pick_winner(stackA, stackB);
//	assert(strcmp(cases, answer1) == 0);
//	free_stack(&stackA);
//	free_stack(&stackB);
//	free(cases);
//	stackA = NULL;
//	stackB = NULL;
//	cases = NULL;
//
////--------------test 2-----------------------
//	cases = calloc(1, sizeof(char*));
//	if (cases == NULL)
//		return ;
//	char *answer2 = "move_case_one\n"
//					"move_case_one\n"
//					"move_case_one\n"
//					"move_case_one\n"
//					"move_case_one\n"
//					"move_case_two\n"
//					"move_case_zero\n"
//					"move_case_three\n";
//	argv[1] = "300 142 925 850 205 80 37 100";
//	make_stack(2, argv, &stackA);
//	argv[1] = "1001 86 40";
//	make_stack(2, argv, &stackB);
//	pick_winner(stackA, stackB);
//	printf("cases\n%s\n answer\n%s\n", cases, answer2);
//	assert(strcmp(cases, answer2) == 0);
//	free_stack(&stackA);
//	free_stack(&stackB);
//	free(cases);
//	stackA = NULL;
//	stackB = NULL;
//	cases = NULL;
//
////--------------test 3-----------------------
//	cases = calloc(1, sizeof(char*));
//	if (cases == NULL)
//		return ;
//	char *answer3 = "move_case_one\n"
//					"move_case_three\n"
//					"move_case_one\n"
//					"move_case_three\n"
//					"move_case_one\n"
//					"move_case_zero\n"
//					"move_case_zero\n"
//					"move_case_three\n"
//					"move_case_two\n"
//					"move_case_two\n";
//	argv[1] = "90 25 102 40 80 -17 -200 300 24 1";
//	make_stack(2, argv, &stackA);
//	argv[1] = "74 1001 -5";
//	print_test(stackA, stackB);
//	make_stack(2, argv, &stackB);
//	pick_winner(stackA, stackB);
////	printf("cases\n%s\n answer\n%s\n", cases, answer3);
//	assert(strcmp(cases, answer3) == 0);
//	free_stack(&stackA);
//	free_stack(&stackB);
//	free(cases);
//	stackA = NULL;
//	stackB = NULL;
//	cases = NULL;

//-------------------case 4-----------------------
//	cases = calloc(1, sizeof(char*));
//	if (cases == NULL)
//		return ;
//	char *answer4 = "move_case_three\n"
//					"move_case_three\n"
//					"move_case_three\n"
//					"move_case_one\n"
//					"move_case_three\n"
//					"move_case_one\n"
//					"move_case_one\n"
//					"move_case_one\n"
//					"move_case_one\n"
//					"move_case_three\n"
//					"move_case_three\n"
//					"move_case_three\n"
//					"move_case_three\n"
//					"move_case_three\n"
//					"move_case_two\n"
//					"move_case_two\n";
//	argv[1] = "782 988 842 171 873 165 357 684 689 737 238 701 723 665 869 761";
//	make_stack(2, argv, &stackA);
//	argv[1] = "673 372 570 310 84 475 384 515 734";
////	print_test(stackA, stackB);
//	make_stack(2, argv, &stackB);
//	pick_winner(stackA, stackB);
////	printf("cases\n%s\n answer\n%s\n", cases, answer3);
//	ASSERT_STR_EQUAL(cases, answer4);
//	free_stack(&stackA);
//	free_stack(&stackB);
//	free(cases);
//	stackA = NULL;
//	stackB = NULL;
//	cases = NULL;

	argv[1] = "4847 2979 829 9036 605";
	make_stack(2, argv, &stackA);
	argv[1] = "8930 8414 4827 1040 847";
	make_stack(2, argv, &stackB);
	print_test(stackA, stackB);
	printf("winner is: %d\nmoves for 4847 is: %d\nmoves for 605 is: %d\n", pick_winner(stackA, stackB),
		   determine_moves(4847, check_position(stackA, 4847), check_size(stackA), stackB), determine_moves(605,
																											check_position(stackA, 605),
																											check_size(stackA), stackB));

}
