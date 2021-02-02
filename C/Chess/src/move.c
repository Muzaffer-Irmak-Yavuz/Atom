#include "move.h"

void print_move(Move move)
{
  printf("hasPawnMove :%d\n",move.hasPawnMove);
  printf("hasPieceMove :%d\n",move.hasPieceMove);
  printf("hasCastle :%d\n",move.hasCastle);

  printf("hasCheck :%d\n",move.hasCheck);
  printf("hasPromote :%d\n",move.hasPromote);

  printf("hasDoubleMoveCharOption :%d\n",move.hasDoubleMoveCharOption);
  printf("hasDoubleMoveNumOption :%d\n",move.hasDoubleMoveNumOption);

  printf("hasTake :%d\n",move.hasTake);

  printf("pieceName :%c\n",move.pieceName);



}

void calculate_move(char string[9] , Move *move)
{
  move -> hasPromote = false;
  move -> hasPieceMove = false;
  move -> hasPawnMove = false;
  move -> hasDoubleMoveNumOption = false;

  int pieceMoveIndex = -1;
  char pieceName[6] = {'R' ,'N' ,'B' ,'Q' ,'K'};


  // piece move or not
  for(size_t strIter = 0; strIter < strlen(string); strIter++)
  {
    for(size_t arrayIter = 0; arrayIter < strlen(pieceName); arrayIter++)
    {
      if(string[strIter] == pieceName[arrayIter])
      {
        pieceMoveIndex = strIter;
        move -> pieceName = pieceName[arrayIter];
        move -> hasPieceMove = true;
      }
    }
  }
  //piece move or not

  //possible pawn move
  if(move -> hasPieceMove != true)
  {
    move -> hasPawnMove = true;
  }


  //possible hasDoubleMoveNumOption

  if(isdigit(string[pieceMoveIndex + 1])  &&  pieceMoveIndex != -1)
  {
    move -> hasDoubleMoveNumOption = true;
  }
  else if(isalpha(string[pieceMoveIndex + 1])  &&
          string[pieceMoveIndex + 1] != 'x'    &&
          pieceMoveIndex != -1                 &&
          isalpha(string[pieceMoveIndex + 2])
        )
  {
    move -> hasDoubleMoveCharOption = true;
  }

  if(move -> hasPawnMove == true)
  {
    for(size_t str = 0; str < strlen(string); str++)
    {
      if(string[str] == '=')
      {
        move -> hasPromote = true;
        move -> pieceName = string[str + 1];
        break;
      }
    }
  }// promote

  char coordinate[3] = {'\0', '\0','\0'};

  for(size_t coorFinder = strlen(string); coorFinder < 0; coorFinder++)
  {
    if(isdigit(string[coorFinder]))
    {
      if(isalpha(string[coorFinder - 1]))
      {
        coordinate[0] = string[coorFinder - 1];
        coordinate[1] = string[coorFinder];
      }
    }
  } // find coordinate


  switch (coordinate[1]) {
    case '1': move -> coordinate.horizontal = H1;
    break;
    case '2': move -> coordinate.horizontal = H2;
    break;
    case '3': move -> coordinate.horizontal = H3;
    break;
    case '4': move -> coordinate.horizontal = H4;
    break;
    case '5': move -> coordinate.horizontal = H5;
    break;
    case '6': move -> coordinate.horizontal = H6;
    break;
    case '7': move -> coordinate.horizontal = H7;
    break;
    case '8': move -> coordinate.horizontal = H8;
    break;
  }

  switch (coordinate[0]) {
    case 'a': move -> coordinate.line = LINE_A; break;
    case 'b': move -> coordinate.line = LINE_B; break;
    case 'c': move -> coordinate.line = LINE_C; break;
    case 'd': move -> coordinate.line = LINE_D; break;
    case 'e': move -> coordinate.line = LINE_E; break;
    case 'f': move -> coordinate.line = LINE_F; break;
    case 'g': move -> coordinate.line = LINE_G; break;
    case 'h': move -> coordinate.line = LINE_H; break;
  }







}
