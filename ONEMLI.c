#include <stdio.h>
#include <stdlib.h>

typedef void (*funcType)(void);
funcType *myList;


void deneme1(void)
{
  printf("DENEME1\n");
}

void deneme2(void)
{
  printf("DENEME2\n");
}

void deneme3(void)
{
  printf("DENEME3\n");
}

void wrapper(funcType *funclist , int n)
{
  for (int i = 0; i < n; i++) {
    funclist[i]();
  }
}
int main()
{
  myList = (funcType *)malloc(sizeof(funcType)*10);

  int n = 0;
  myList[n++] = &deneme1;
  myList[n++] = &deneme2;
  myList[n++] = &deneme3;

  wrapper(myList, n);


  return 0;
}
