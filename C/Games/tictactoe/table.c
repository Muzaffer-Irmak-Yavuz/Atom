#include "table.h"

/*
                     :   :
                  ---:---:---
                     :   :
                  ---:---:---
                     :   :
*/


void init_table()
{
  const char hyphen = '-';
  const char line = ':';

  gameTable[1][0] = hyphen;
  gameTable[1][1] = hyphen;
  gameTable[1][2] = hyphen;

  gameTable[1][4] = hyphen;
  gameTable[1][5] = hyphen;
  gameTable[1][6] = hyphen;

  gameTable[1][8] = hyphen;
  gameTable[1][9] = hyphen;
  gameTable[1][10] = hyphen;


  gameTable[3][0] = hyphen;
  gameTable[3][1] = hyphen;
  gameTable[3][2] = hyphen;

  gameTable[3][4] = hyphen;
  gameTable[3][5] = hyphen;
  gameTable[3][6] = hyphen;

  gameTable[3][8] = hyphen;
  gameTable[3][9] = hyphen;
  gameTable[3][10] = hyphen;


  gameTable[0][3] = line;
  gameTable[0][7] = line;

  gameTable[1][3] = line;
  gameTable[1][7] = line;

  gameTable[2][3] = line;
  gameTable[2][7] = line;

  gameTable[3][3] = line;
  gameTable[3][7] = line;

  gameTable[4][3] = line;
  gameTable[4][7] = line;

}


void print_table()
{
  for(uint8_t rowIter = 0; rowIter < TABLE_ROW_COUNT; rowIter++)
  {
    for(uint8_t columnIter = 0; columnIter < TABLE_COLUMN_COUNT; columnIter++)
    {
      printf("%c",gameTable[rowIter][columnIter] );
    }

    printf("\n");
  }
}
