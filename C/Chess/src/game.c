#include "game.h"


void game_loop()
{
  system("clear");
  Board *board = (Board *)malloc(sizeof(Board));
  init_board(board);
  print_board(board);

  Piece piece[32];
  init_pieces(piece);

  for(size_t pieceIter = 0; pieceIter < 32; pieceIter++)
  {
    sync_piece_with_board(board ,piece[pieceIter]);
  }

  print_board(board);


}

void sync_piece_with_board(Board *board , Piece piece)
{
  int index = 0;




  for(size_t squareIter = 0; squareIter < SQ_NUM; squareIter++)
  {

    if(piece.coordinate.line == board -> square[squareIter].coordinate.line &&
       piece.coordinate.horizontal == board -> square[squareIter].coordinate.horizontal)
    {
      break;

    }
    index++;
  }


  for(int indexIter = 0 , columnIter = 2,rowIter = 15; indexIter < 64;indexIter++,columnIter += 4)
  {
    int my_bad_ignore_this = 0;

    if(indexIter == 8)
      columnIter = 2;
    else if(indexIter == 16)
      columnIter = 2;
    else if(indexIter == 24)
      columnIter = 2;
    else if(indexIter == 32)
      columnIter = 2;
    else if(indexIter == 40)
      columnIter = 2;
    else if(indexIter == 48)
      columnIter = 2;
    else if(indexIter == 56)
      columnIter = 2;


    indexIter == 8 ? rowIter -= 2:my_bad_ignore_this++;
    indexIter == 16 ? rowIter -= 2:my_bad_ignore_this++;
    indexIter == 24 ? rowIter -= 2:my_bad_ignore_this++;
    indexIter == 32 ? rowIter -= 2:my_bad_ignore_this++;
    indexIter == 40 ? rowIter -= 2:my_bad_ignore_this++;
    indexIter == 48 ? rowIter -= 2:my_bad_ignore_this++;
    indexIter == 56 ? rowIter -= 2:my_bad_ignore_this++;


    if(indexIter == index)
    {
      if(piece.name == Rook)
      {
        if(piece.color == PWhite)
          board -> frameVar.frame[rowIter][columnIter] = 'R';
        else if(piece.color == PBlack)
          board -> frameVar.frame[rowIter][columnIter] = 'r';
      }
      else if(piece.name == Knight)
      {
        if(piece.color == PWhite)
          board -> frameVar.frame[rowIter][columnIter] = 'N';
        else if(piece.color == PBlack)
          board -> frameVar.frame[rowIter][columnIter] = 'n';
      }
      else if(piece.name == Bishop)
      {
        if(piece.color == PWhite)
          board -> frameVar.frame[rowIter][columnIter] = 'B';
        else if(piece.color == PBlack)
          board -> frameVar.frame[rowIter][columnIter] = 'b';
      }
      else if(piece.name == Queen)
      {
        if(piece.color == PWhite)
          board -> frameVar.frame[rowIter][columnIter] = 'Q';
        else if(piece.color == PBlack)
          board -> frameVar.frame[rowIter][columnIter] = 'q';
      }
      else if(piece.name == King)
      {
        if(piece.color == PWhite)
          board -> frameVar.frame[rowIter][columnIter] = 'K';
        else if(piece.color == PBlack)
          board -> frameVar.frame[rowIter][columnIter] = 'k';
      }
      else if(piece.name == Pawn)
      {
        if(piece.color == PWhite)
          board -> frameVar.frame[rowIter][columnIter] = 'P';
        else if(piece.color == PBlack)
          board -> frameVar.frame[rowIter][columnIter] = 'p';
      }


    }
  }



index = 0;





}
