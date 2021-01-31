#if !defined MOVE_H
#define MOVE_H

#include <stdio.h>

struct moveqq
{
  unsigned int move :4;
}__attribute__((packed));


typedef struct moveqq move;

#endif
