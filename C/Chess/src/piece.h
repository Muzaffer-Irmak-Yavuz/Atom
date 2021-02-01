#if !defined PIECE_H_INCLUDED
#define PIECE_H_INCLUDED

enum Color {White , Black};
enum Name  {Pawn , Rook , Knight ,Bishop , Queen ,King};

typedef enum Color Color;
typedef enum Name Name;


struct Piece
{
  Color color;
  Name name;
};

typedef struct Piece Piece;
#endif
