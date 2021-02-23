#ifndef TEST_ASSERT_H
#define TEST_ASSERT_H

#include <stdbool.h>
#include <stdio.h>
#include "../../src/prime_num.h"


// Its for running test and configure global variables
void RUN_TEST(void (*test_function)(void));


// just control the expression and print message
void TEST_ASSERT_EQUAL_BOOL(bool expected , bool actual , const char *func_name);


#endif
