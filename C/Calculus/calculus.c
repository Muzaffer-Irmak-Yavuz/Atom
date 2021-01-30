#include "calculus.h"



int linear_equation_checker(char *equation)
{
  if(NULL == equation)
    return -1;

  char equalsSymbol = '=';
  //char plusSymbol = '+';
  //char minusSymbol = '-';
  //char divisionSymbol = '/';
  //char multipSymbol = '.';

  char target;
  int targetFactor = 1;

  char variable1 = '\0';
  char variable2 = '\0';
  //char variable3 = '\0';


  bool isEqualsFind = false;

  for(uint8_t eqIter = 0; eqIter < strlen(equation); eqIter++)
  {
    if(!isEqualsFind)
    {
      if(isdigit(equation[eqIter]) && isalpha(equation[eqIter + 1]) )
        targetFactor = equation[eqIter] - 48;

      if(isalpha(equation[eqIter]))
        target = equation[eqIter];
    }

    if(equalsSymbol == equation[eqIter])
      isEqualsFind = true;

    if(isEqualsFind)
    {
      if(isalpha(equation[eqIter]) && variable1 == '\0')
        variable1 = equation[eqIter];

      else if(isalpha(equation[eqIter]) && variable1 != '\0')
        variable2 = equation[eqIter];

      else if(isalpha(equation[eqIter]) && variable2 != '\0')
        variable3 = equation[eqIter];
    }
  }

  if(target != '\0')
  {
    if(targetFactor != 1)
      printf("Target found : %c target factor found :%d\n",target ,targetFactor );
    else if(targetFactor == 1)
    printf("Target found : %c target factor not found\n",target);

  }
  return 0;
}
