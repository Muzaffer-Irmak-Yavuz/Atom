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

void sync_piece_with_board(Board *board , Piece piece)
{

  for(size_t squareIter = 0; squareIter < SQ_NUM; squareIter++)
  {
    if(piece.coordinate.line == board -> square[squareIter].coordinate.line &&
       piece.coordinate.horizontal == board -> square[squareIter].coordinate.horizontal)
    {
      //TODO calculate index
    }
  }

}
