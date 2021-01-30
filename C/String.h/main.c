#include "string.h"



int main() {

  char *deneme = (char *)malloc(sizeof(char));
  char *deneme2 =(char *)malloc(sizeof(char));

  for(size_t counter = 0; counter < 10; counter++)
  {
    deneme2[counter] = 'a';
  }


  strMcpy(deneme , deneme2);

  char ch;

  while((ch = iter(deneme)))
    printf("%c\n",ch);




  return 0;
}
