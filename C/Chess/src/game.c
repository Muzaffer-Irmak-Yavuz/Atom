#include "game.h"


void game_loop()
{
  system("clear");
  Board *board = (Board *)malloc(sizeof(Board));
  init_board(board);
  print_board(board);

  Piece piece[32];
  init_pieces(piece);
}
