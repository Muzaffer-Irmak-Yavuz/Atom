#include "calculus.h"
#include <stdlib.h>


int main() {

  char *equation = (char *)malloc(sizeof(char));
  scanf("%s\n",equation);

  linear_equation_checker(equation);

  free(equation);
  return 0;
}
