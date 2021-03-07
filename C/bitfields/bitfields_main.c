#include "options/options.h"



int main()
{

  SET_OPTION(options,READ_ONLY | WRITE_ONLY);

  printf("%lu\n",GET_OPTION(options,READ_ONLY) );
  printf("%lu\n",GET_OPTION(options,WRITE_ONLY) );
  printf("%lu\n",GET_OPTION(options,3) );









  return 0;
}
