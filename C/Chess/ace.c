#include "src/board.h"
#include "src/media.h"



int main()
{
  Board *board = (Board *)malloc(sizeof(Board));
  init_board(board);
  print_board(board);


  return 0;
}
