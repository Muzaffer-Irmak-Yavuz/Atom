#if !defined BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include <stdio.h>
#include <stdbool.h>

enum Color      {White , Black};
enum Line       {LINE_A , LINE_B , LINE_C , LINE_D , LINE_E , LINE_F , LINE_G , LINE_H};
enum Horizontal {H1 ,H2 , H3 ,H4 ,H5 , H6, H7 ,H8};

typedef enum Color Color;
typedef enum Line Line;
typedef enum Horizontal Horizontal;

struct Coordinate
{
  
  Line line;
  Horizontal horizontal;
};

typedef struct Coordinate Coordinate;




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
