#if !defined BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include "frame.h"
#include "coordinates.h"

#include <stdio.h>
#include <stdbool.h>

enum Color {White , Black};


typedef enum Color Color;


struct Square
{

  bool isEmpty;
  Color color;
  Coordinate coordinate;
};

typedef struct Square Square;


#define SQ_NUM 64

struct Board
{
  Frame_t frameVar;
  Square square[SQ_NUM];
};

typedef struct Board Board;



void init_board(Board *board);

void print_board(Board *board);





#endif
