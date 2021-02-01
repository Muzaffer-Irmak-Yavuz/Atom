#if !defined PIECE_H_INCLUDED
#define PIECE_H_INCLUDED

#include "coordinates.h"

enum PieceColor {PWhite , PBlack};
enum Name  {Pawn , Rook , Knight ,Bishop , Queen ,King};

typedef enum PieceColor PieceColor;
typedef enum Name Name;


struct Piece
{

  Coordinate coordinate;
  PieceColor color;
  Name name;
};
typedef struct Piece Piece;

void init_pieces(Piece piece[32]);


#endif
