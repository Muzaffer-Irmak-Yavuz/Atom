#if !defined MOVE_H_INCLUDED
#define  MOVE_H_INCLUDED

#include "coordinates.h"

#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>


struct Move
{
  bool hasPawnMove; //TAMAM
  bool hasPieceMove; //TAMAM
  bool hasCastle;
  bool hasCheck; //şah
  bool hasPromote; // vezir çıkma
  bool hasDoubleMoveCharOption;
  bool hasDoubleMoveNumOption;
  bool hasTake;

  char pieceName;// P R N B Q K
  char check;// '+'
  char promote; //'='

  Coordinate coordinate;
};

typedef struct Move Move;

void calculate_move(char *string , Move *move);

void print_move(Move *move);


#endif
