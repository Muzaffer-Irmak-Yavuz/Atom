#if !defined BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

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
  Square square[SQ_NUM];
};

typedef struct Board Board;


//TODO add print_board


Board *init_board();





#endif
