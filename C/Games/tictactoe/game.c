#include "game.h"



void init_players()
{
  player[FIRST_PLAYER].name = (char *)malloc(sizeof(char));
  player[SECOND_PLAYER].name = (char *)malloc(sizeof(char));

  printf("First player name :");
  scanf("%s" ,player[FIRST_PLAYER].name);

  printf("%s's piece :" ,player[FIRST_PLAYER].name);
  scanf("%c",&player[FIRST_PLAYER].piece);

  printf("Second player name :");
  scanf("%s" ,player[SECOND_PLAYER].name);

  printf("%s's piece :" ,player[SECOND_PLAYER].name);
  scanf("%c",&player[SECOND_PLAYER].piece);

}

void get_player_input(move *move)
{




    int tempMove;
    do {
      printf("Please type a move :");
      scanf("%d",&tempMove);
    } while(tempMove < 1 || tempMove > 9);

    move -> move = tempMove;




}
