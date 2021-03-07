#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#define INT  (0x01) //0b00000001
#define CHAR (0x02) //0b00000010
#define ALL  (0x03) //0b00000011





struct FunctionBasics
{
  const char *func_name;
  const char *param_name;
  int param_val;

};


struct Properties {

  struct FunctionBasics fbasic;

};

void wrapper(struct Properties(*func)(void))
{


  struct Properties var = func();
  printf("%s\n",var.fbasic.func_name );
  printf("%s\n",var.fbasic.param_name );
  printf("%d\n",var.fbasic.param_val );


}



struct Properties name(void)
{
  struct Properties prop;

  int deneme = 123456789;

  prop.fbasic.func_name = __func__;
  prop.fbasic.param_name = "deneme";
  prop.fbasic.param_val = deneme;



  return prop;

}






int main(void) {





  return 0;
}
