#ifndef PIECE_H
#define PIECE_H

#include "position.h"

enum Name {Pawn = 'P'   , Rook = 'R',
           Knight = 'N' , Bishop = 'B',
           Queen = 'Q'  , King = 'K'};

enum Colour {White = 1 , Black = 2};

struct Piece
{
  enum Position pos;
  enum Name name;
  enum Colour colour;
};

typedef struct Piece Piece;

#endif
