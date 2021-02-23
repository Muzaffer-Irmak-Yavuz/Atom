#include "test_assert.h"

int failure = 0;
int passed = 0;

void RUN_TEST(void (*test_function)(void))
{
  
  test_function();

}


void TEST_ASSERT_EQUAL_BOOL(bool expected , bool actual , const char *func_name)
{
  if (expected != actual)
  {
    failure++;
    printf("TEST %s FAILURED : expected :%d was:%d\n",func_name,expected ,actual);

  }
  else
  {
    printf("TEST %s PASSED\n",func_name);
    passed++;

  }
}
