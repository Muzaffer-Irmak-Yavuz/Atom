#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void *wrapper(void *(*generic)(void *, void*), void *data1 ,void *data2)
{
  void *retValue = generic(data1 ,data2);
  return retValue;
}


void *generic(void *_data1 , void *_data2)
{
  int *data1 =(int *) _data1;
  int *data2 =(int *) _data2;

  int *sum = (int *)malloc(sizeof(int));

  *sum = *data1 + *data2;

  return sum;
}



int main(void)
{
  printf("%d\n",((uint16_t)0x1000) | ((uint16_t)0x2000) | ((uint16_t)0x4000) | ((uint16_t)0x8000));
  printf("%u\n",((uint16_t)0x1000));
  return 0;
}
