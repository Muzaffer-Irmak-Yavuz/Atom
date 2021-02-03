#include "../headers/piece.h"


void init_pieces(Piece piece[32])
{
  for(int whiteIter = 0; whiteIter < 16; whiteIter++)
  {
    piece[whiteIter].pos = (enum Position) whiteIter;
    piece[whiteIter].colour = White;
    if (whiteIter > 7) {
      piece[whiteIter].name = Pawn;
    }
  }

  piece[0].name = Rook;
  piece[1].name = Knight;
  piece[2].name = Bishop;
  piece[3].name = Queen;
  piece[4].name = King;
  piece[5].name = Bishop;
  piece[6].name = Knight;
  piece[7].name = Rook;

  for (int blackIter = 16; blackIter < 32; blackIter++) {
    piece[blackIter].pos = (enum Position) blackIter;
    piece[blackIter].colour = Black;

    if(blackIter < 24)
      piece[blackIter].name = Pawn;
  }

  piece[24].name = Rook;
  piece[25].name = Knight;
  piece[26].name = Bishop;
  piece[27].name = Queen;
  piece[28].name = King;
  piece[29].name = Bishop;
  piece[30].name = Knight;
  piece[31].name = Rook;

  return;
}
