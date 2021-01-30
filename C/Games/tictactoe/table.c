#include "table.h"

/*
                     :   :
                  ---:---:---
                     :   :
                  ---:---:---
                     :   :
*/

void table_init()
{

  const char colon = ':';
  const char hyphen = '-';
  // I will use colon for rows and hyphen for columns

  //first row (for 1st and 2nd pieces)

  gameTable[1][0] = hyphen;
  gameTable[1][1] = hyphen;
  gameTable[1][2] = hyphen;

  //second row (for 2nd and 3rd pieces)

  gameTable[3][0] = hyphen;
  gameTable[3][1] = hyphen;
  gameTable[3][2] = hyphen;


  //first column
  gameTable[0][3] = colon;
  gameTable[0][7] = colon;

  //second column
  gameTable[1][3] = colon;
  gameTable[1][7] = colon;

  //third column
  gameTable[2][3] = colon;
  gameTable[2][7] = colon;

  //fourth column
  gameTable[3][3] = colon;
  gameTable[3][7] = colon;

  //fifth column
  gameTable[4][3] = colon;
  gameTable[4][7] = colon;

  return;

}
