
#ifndef PUSH_SWAP_TEST_H
#define PUSH_SWAP_TEST_H

#define ASSERT_INT_EQUAL(var1, var2) \
    do \
    { \
        if (var1 != var2) \
        { \
            printf("Val left = %d is not equal %d\n", var1, var2); \
        	assert(var1 == var2);                             \
        } \
    } while(0)

#define ASSERT_STR_EQUAL(var1, var2) \
    do \
    { \
        if (strcmp(var1, var2) != 0) \
        { \
            printf("Val calculated\n%sis not equal answer\n%s\n", var1, var2); \
        	assert(strcmp(var1, var2) == 0);                             \
        } \
    } while(0)

void test_move_cases();
void test_push_cases();

#endif //PUSH_SWAP_TEST_H
