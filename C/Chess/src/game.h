#if !defined GAME_H_INCLUDED
#define GAME_H_INCLUDED


#include "board.h"
#include "media.h"
#include "piece.h"
#include "move.h"


void game_loop();

void sync_piece_with_board(Board *board , Piece piece);



#endif
