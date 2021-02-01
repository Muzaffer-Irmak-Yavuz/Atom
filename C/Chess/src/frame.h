#if !defined FRAME_H_INCLUDED
#define FRAME_H_INCLUDED

#define BOARD_FRAME_ROW (18)
#define BOARD_FRAME_COLUMN (35)

/*
  [18][35]

  |---|---|---|---|---|---|---|---|
  |   |   |   |   |   |   |   |   | 8
  |---|---|---|---|---|---|---|---|
  |   |   |   |   |   |   |   |   | 7
  |---|---|---|---|---|---|---|---|
  |   |   |   |   |   |   |   |   | 6
  |---|---|---|---|---|---|---|---|
  |   |   |   |   |   |   |   |   | 5
  |---|---|---|---|---|---|---|---|
  |   |   |   |   |   |   |   |   | 4
  |---|---|---|---|---|---|---|---|
  |   |   |   |   |   |   |   |   | 3
  |---|---|---|---|---|---|---|---|
  |   |   |   |   |   |   |   |   | 2
  |---|---|---|---|---|---|---|---|
  |   |   |   |   |   |   |   |   | 1
  |---|---|---|---|---|---|---|---|
    A   B   C   D   E   F   G   H
*/

struct Frame_t
{

  char frame[BOARD_FRAME_ROW][BOARD_FRAME_COLUMN];
};

typedef struct Frame_t Frame_t;



#endif