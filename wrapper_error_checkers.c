#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


void add_wrapper(void (*add)(int ,int) ,int num1 ,int num2)
{
  if (num1 < 0 || num2 < 0)
  {
    printf("ERROR\n" );
    printf("Return with exit code :1\n");
    exit(1);
  }

  const int expected = 10;

  int actual = add(num1 ,num2);

  if (actual < expected)
  {
    printf("ERROR\n" );
    printf("Return with exit code :1\n");
    exit(1);
  }
  else
  {
    printf("Sum :%d\n", actual );
  }

}


int add(int num1 ,int num2)
{
  return num1 + num2;
}



int main(void) {

  add_wrapper(add ,5 ,35);
  return 0;
}
