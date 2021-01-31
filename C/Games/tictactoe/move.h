#if !defined MOVE_H
#define MOVE_H

#include <stdio.h>

struct Move
{
  unsigned int move :4;
}__attribute__((packed));


typedef struct Move Move;

void debug_Move();

#endif
