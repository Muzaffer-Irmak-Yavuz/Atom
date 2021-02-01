#if !defined PIECE_H_INCLUDED
#define PIECE_H_INCLUDED

#include "coordinates.h"

enum Color {White , Black};
enum Name  {Pawn , Rook , Knight ,Bishop , Queen ,King};

typedef enum Color Color;
typedef enum Name Name;


struct Piece
{

  Coordinate coordinate;
  Color color;
  Name name;
};
typedef struct Piece Piece;

void init_pieces(Piece piece[32]);


#endif
