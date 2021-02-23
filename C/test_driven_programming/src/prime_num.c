#include "prime_num.h"

bool isPrime(int num)
{
  if (num < 2)
    return false;

  bool isPrime = true;
  for (size_t counter = 2; counter < (size_t)num / 2;counter++)
  {
    if (num % counter == 0)
    {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}
