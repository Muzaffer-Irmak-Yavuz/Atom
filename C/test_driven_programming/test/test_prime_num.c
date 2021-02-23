#include "../src/prime_num.h"
#include "test_source/test_assert.h"

static void test_zero_is_prime(void)
{
  int num = 0;
  bool expected = false;
  bool actual = isPrime(num);

  TEST_ASSERT_EQUAL_BOOL(expected , actual, __func__);
}

static void test_two_is_prime(void)
{
  int num = 2;
  bool expected = true;
  bool actual = isPrime(num);

  TEST_ASSERT_EQUAL_BOOL(expected , actual , __func__);
}

static void test_negative_number(void)
{
  int num = -2;
  bool expected = false;
  bool actual = isPrime(num);

  TEST_ASSERT_EQUAL_BOOL(expected , actual , __func__);
}

static void test_big_number(void)
{
  int num = 103;
  bool expected = true;
  bool actual = isPrime(num);

  TEST_ASSERT_EQUAL_BOOL(expected , actual , __func__);
}



int main(void) {

  RUN_TEST(test_zero_is_prime);
  RUN_TEST(test_two_is_prime);
  RUN_TEST(test_negative_number);
  RUN_TEST(test_big_number);




  return 0;
}
