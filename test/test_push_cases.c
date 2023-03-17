
#include "../include/turk.h"
#include "../include/t_stack.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/test.h"
#include <string.h>

char *test_moves;

void test_push_cases()
{
	t_stack* stackA;
	t_stack* stackB;
	char** argv = malloc(2 * sizeof(char*));
	argv[0] = "./push_swap";

//--------------test 1----------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer1 = "";
	argv[1] = "123 200 140 771 271 832 37";
	make_stack(2, argv, &stackA);
	argv[1] = "759 178";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 123);
	ASSERT_STR_EQUAL(test_moves, answer1);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;

//--------------test 2------------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer2 = "rr\n";
	argv[1] = "123 200 140 771 271 832 37";
	make_stack(2, argv, &stackA);
	argv[1] = "759 178";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 200);
	ASSERT_STR_EQUAL(test_moves, answer2);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;

//-----------------------test 3--------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer3 = "ra\n"
					"ra\n";
	argv[1] = "123 200 140 771 271 832 37";
	make_stack(2, argv, &stackA);
	argv[1] = "759 178";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 140);
	ASSERT_STR_EQUAL(test_moves, answer3);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;

//-----------------------test 4--------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer4 = "ra\n"
					"ra\n"
					"ra\n";
	argv[1] = "123 200 140 771 271 832 37";
	make_stack(2, argv, &stackA);
	argv[1] = "759 178";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 771);
	ASSERT_STR_EQUAL(test_moves, answer4);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;

//-----------------------test 5--------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer5 = "rrr\n"
					"rra\n"
					"rra\n";
	argv[1] = "123 200 140 771 271 832 37";
	make_stack(2, argv, &stackA);
	argv[1] = "759 178";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 271);
	ASSERT_STR_EQUAL(test_moves, answer5);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;

//-----------------------test 6--------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer6 = "rra\n"
					"rra\n";
	argv[1] = "123 200 140 771 271 832 37";
	make_stack(2, argv, &stackA);
	argv[1] = "759 178";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 832);
	ASSERT_STR_EQUAL(test_moves, answer6);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;

//-----------------------test 7--------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer7 = "rra\n";
	argv[1] = "123 200 140 771 271 832 37";
	make_stack(2, argv, &stackA);
	argv[1] = "759 178";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 37);
	ASSERT_STR_EQUAL(test_moves, answer7);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;

//-----------------------test 8--------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer8 = "rrb\n";
	argv[1] = "260 145 9 17 1001 24 67 55 1030 150 80 2 1";
	make_stack(2, argv, &stackA);
	argv[1] = "21 5 835 640 780 1005 60";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 260);
	ASSERT_STR_EQUAL(test_moves, answer8);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;

//-----------------------test 9--------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer9 = "rrb\n"
					"ra\n";
	argv[1] = "260 145 9 17 1001 24 67 55 1030 150 80 2 1";
	make_stack(2, argv, &stackA);
	argv[1] = "21 5 835 640 780 1005 60";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 145);
	ASSERT_STR_EQUAL(test_moves, answer9);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;

//-----------------------test 10--------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer10 = "rr\n"
					 "ra\n";
	argv[1] = "260 145 9 17 1001 24 67 55 1030 150 80 2 1";
	make_stack(2, argv, &stackA);
	argv[1] = "21 5 835 640 780 1005 60";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 9);
	ASSERT_STR_EQUAL(test_moves, answer10);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;

//-----------------------test 11--------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer11 = "rr\n"
					 "ra\n"
					 "ra\n";
	argv[1] = "260 145 9 17 1001 24 67 55 1030 150 80 2 1";
	make_stack(2, argv, &stackA);
	argv[1] = "21 5 835 640 780 1005 60";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 17);
	ASSERT_STR_EQUAL(test_moves, answer11);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;

//-----------------------test 12--------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer12 = "rr\n"
					 "rr\n"
					 "ra\n"
					 "ra\n";
	argv[1] = "260 145 9 17 1001 24 67 55 1030 150 80 2 1";
	make_stack(2, argv, &stackA);
	argv[1] = "21 5 835 640 780 1005 60";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 1001);
	ASSERT_STR_EQUAL(test_moves, answer12);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;

//-----------------------test 13--------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer13 = "ra\n"
					 "ra\n"
					 "ra\n"
					 "ra\n"
					 "ra\n";
	argv[1] = "260 145 9 17 1001 24 67 55 1030 150 80 2 1";
	make_stack(2, argv, &stackA);
	argv[1] = "21 5 835 640 780 1005 60";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 24);
	ASSERT_STR_EQUAL(test_moves, answer13);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;

//-----------------------test 14--------------------
	test_moves = calloc(1, sizeof(char*));
	if (test_moves == NULL)
		return ;
	char *answer14 = "rr\n"
					 "rr\n"
					 "rr\n"
					 "rr\n"
					 "rr\n"
					 "rr\n";
	argv[1] = "260 145 9 17 1001 24 67 55 1030 150 80 2 1";
	make_stack(2, argv, &stackA);
	argv[1] = "21 5 835 640 780 1005 60";
	make_stack(2, argv, &stackB);
	move_to_top(&stackA, &stackB, 67);
	ASSERT_STR_EQUAL(test_moves, answer14);
	free_stack(&stackA);
	free_stack(&stackB);
	free(test_moves);
	stackA = NULL;
	stackB = NULL;
	test_moves = NULL;
}