#include "board.h"


void init_board(Board *board)
{

  //init frame

  const char wall = '|';
  const char roof = '-';

  //passing walls

  for(size_t rowIter = 0; rowIter < BOARD_FRAME_ROW -1; rowIter++)
  {
    for(size_t colIter = 0; colIter < BOARD_FRAME_COLUMN - 2;colIter++)
    {

      board -> frameVar.frame[rowIter][colIter] = wall;
      if(colIter != 0 && colIter % 4 != 0)
        {board -> frameVar.frame[rowIter][colIter] = ' ';}
    }
  }

  //passing roofs

  for(size_t rowIter = 0; rowIter < BOARD_FRAME_ROW -1; rowIter += 2)
  {
    for(size_t colIter = 1; colIter < BOARD_FRAME_COLUMN -2; colIter++)
    {
      if(colIter % 4 == 0)
        {continue;}

      board -> frameVar.frame[rowIter][colIter] = roof;
    }
  }

  board -> frameVar.frame[1][33] = ' ';
  board -> frameVar.frame[3][33] = ' ';
  board -> frameVar.frame[5][33] = ' ';
  board -> frameVar.frame[7][33] = ' ';
  board -> frameVar.frame[9][33] = ' ';
  board -> frameVar.frame[11][33] = ' ';
  board -> frameVar.frame[13][33] = ' ';
  board -> frameVar.frame[15][33] = ' ';


  // passing numbers

  board -> frameVar.frame[1][34] = '8';
  board -> frameVar.frame[3][34] = '7';
  board -> frameVar.frame[5][34] = '6';
  board -> frameVar.frame[7][34] = '5';
  board -> frameVar.frame[9][34] = '4';
  board -> frameVar.frame[11][34] = '3';
  board -> frameVar.frame[13][34] = '2';
  board -> frameVar.frame[15][34] = '1';


  // passing character

  for(size_t colIter = 0; colIter < BOARD_FRAME_COLUMN; colIter++)
  {
      board -> frameVar.frame[17][colIter] = ' ';
  }

  board -> frameVar.frame[17][2] = 'A';
  board -> frameVar.frame[17][6] = 'B';
  board -> frameVar.frame[17][10] = 'C';
  board -> frameVar.frame[17][14] = 'D';
  board -> frameVar.frame[17][18] = 'E';
  board -> frameVar.frame[17][22] = 'F';
  board -> frameVar.frame[17][26] = 'G';
  board -> frameVar.frame[17][30] = 'H';


  // Init SQUARES

  for(size_t lineIter = LINE_A; lineIter <= LINE_H; lineIter++)
  {
    board -> square[lineIter].coordinate.horizontal = H1;
    board -> square[lineIter].coordinate.line =(Line)lineIter;

  }

  for(size_t lineIter = LINE_A ,sqIter = 8; lineIter <= LINE_H; lineIter++,sqIter++)
  {
    board -> square[sqIter].coordinate.horizontal = H2;
    board -> square[sqIter].coordinate.line =(Line)lineIter;

  }

  for(size_t lineIter = LINE_A ,sqIter = 16; lineIter <= LINE_H; lineIter++,sqIter++)
  {
    board -> square[sqIter].coordinate.horizontal = H3;
    board -> square[sqIter].coordinate.line =(Line)lineIter;
  }

  for(size_t lineIter = LINE_A ,sqIter = 24; lineIter <= LINE_H; lineIter++,sqIter++)
  {
    board -> square[sqIter].coordinate.horizontal = H4;
    board -> square[sqIter].coordinate.line =(Line)lineIter;
  }

  for(size_t lineIter = LINE_A ,sqIter = 32; lineIter <= LINE_H; lineIter++,sqIter++)
  {
    board -> square[sqIter].coordinate.horizontal = H5;
    board -> square[sqIter].coordinate.line =(Line)lineIter;
  }

  for(size_t lineIter = LINE_A ,sqIter = 40; lineIter <= LINE_H; lineIter++,sqIter++)
  {
    board -> square[sqIter].coordinate.horizontal = H6;
    board -> square[sqIter].coordinate.line =(Line)lineIter;
  }

  for(size_t lineIter = LINE_A ,sqIter = 48; lineIter <= LINE_H; lineIter++,sqIter++)
  {
    board -> square[sqIter].coordinate.horizontal = H7;
    board -> square[sqIter].coordinate.line =(Line)lineIter;

  }

  for(size_t lineIter = LINE_A ,sqIter = 56; lineIter <= LINE_H; lineIter++,sqIter++)
  {
    board -> square[sqIter].coordinate.horizontal = H8;
    board -> square[sqIter].coordinate.line =(Line)lineIter;
  }

  return;

}


void print_board(Board *board)
{
  system("clear");
  for(size_t rowIter = 0; rowIter < BOARD_FRAME_ROW; rowIter++)
  {
    for(size_t colIter = 0; colIter < BOARD_FRAME_COLUMN; colIter++)
    {
      printf("%c", board -> frameVar.frame[rowIter][colIter]);
    }
    printf("\n");
  }
}
