#include "../headers/table.h"


void init_table(Table *table)
{
  // init table coordinates
  for(int sqIter = 0; sqIter < SQ_NUM; sqIter++)
  {
    table -> square[sqIter].pos = (enum Position)sqIter;
  }

  //frame variables;
  const char wall = '|';
  const char roof = '-';


  //adding walls and roofs

  for(int y = 0; y < FR_Y;y++)
  {
    for(int x = 0; x < FR_X;x++)
    {
      if(!y % 2)
      {
        if(x == 0 || !(x % 4))
          table -> frame.frame[y][x] = wall;
        else
          table -> frame.frame[y][x] = roof;
      }
      else
      {
        if(x == 0 || !(x % 4))
          table -> frame.frame[y][x] = wall;
        else
          table -> frame.frame[y][x] = ' ';
      }
    }// x end
  }//y end

  return;
}// func end





void print_table(Table *table)
{
  for (int y = 0; y < FR_Y; y++) {
    for (int x = 0; x < FR_X; x++) {
      printf("%c",table -> frame.frame[y][x]);
    }
  }
}
