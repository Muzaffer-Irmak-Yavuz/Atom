#include "tunable.h"



int add(int num, ...)
{
  va_list args;

  va_start(args , num);
  int sum = 0;
  for(int i = 0; i < num ;i++)
  {
    sum += va_arg(args , int);
  }

  return sum / num;

}
