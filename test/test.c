
#include "../include/turk.h"
#include "../include/t_stack.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/test.h"
#include <string.h>

void test_case_1() {

	ASSERT_INT_EQUAL(move_case_one(0, 0), 1);
	ASSERT_INT_EQUAL(move_case_one(0, 1), 2);

	t_stack* stackA;
	t_stack* stackB;
	char** argv = malloc(2 * sizeof(char*));
	argv[0] = "./push_swap";
	argv[1] = "1 2 3 4 5";
	make_stack(2, argv, &stackA);

	argv[1] = "6 7";
	make_stack(2, argv, &stackB);

	assert(stackA != NULL);
	ASSERT_INT_EQUAL(stackA->number, 1);
	ASSERT_INT_EQUAL(stackA->next->number, 2);

	ASSERT_INT_EQUAL(determine_moves(1, 0, 5, stackB), 2);
	free(stackA);
	free(stackB);
	free(argv);
}

int main() {
	//	test_case_1();
	test_move_cases();
//	test_push_cases();
//	printf("yay!! \\0/\n");
	return 0;
}