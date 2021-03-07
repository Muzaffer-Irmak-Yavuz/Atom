#include "warn.h"


void warn(bool exp, int line, const char *func)
{
  if (exp == true)
  {
    printf("Error occured in func :%s line :%d\n",func,line);
  }
}

void fatal(bool exp, int line, const char *func)
{
  if (exp == true)
  {
    perror(" ");
    printf("Error occured in func :%s line :%d\n\n",func,line);

    exit(EXIT_FAILURE);
  }
}
