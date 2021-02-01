#include "board.h"

void init_board(Board *board)
{
  //all board for
  //each horizon
  for(size_t horIter = 0; horIter < 8; horIter++)
  {

      for(size_t squareIter = 0; squareIter < 8; squareIter++)
      {
        // line naming
        if(squareIter == LINE_A)
          {board -> square[squareIter].coordinate.line = LINE_A;}

        else if(squareIter == LINE_B)
          {board -> square[squareIter].coordinate.line = LINE_B;}

        else if(squareIter == LINE_C)
          {board -> square[squareIter].coordinate.line = LINE_C;}

        else if(squareIter == LINE_D)
          {board -> square[squareIter].coordinate.line = LINE_D;}

        else if(squareIter == LINE_E)
          {board -> square[squareIter].coordinate.line = LINE_E;}

        else if(squareIter == LINE_F)
          {board -> square[squareIter].coordinate.line = LINE_F;}

        else if(squareIter == LINE_G)
          {board -> square[squareIter].coordinate.line = LINE_G;}

        else if(squareIter == LINE_H)
          {board -> square[squareIter].coordinate.line = LINE_H;}

        // end of line naming


        //horizontal naming
        if(horIter == H1)
          {board -> square[squareIter].coordinate.horizontal = H1;}

        else if(horIter == H2)
          {board -> square[squareIter].coordinate.horizontal = H2;}

        else if(horIter == H3)
          {board -> square[squareIter].coordinate.horizontal = H3;}

        else if(horIter == H4)
          {board -> square[squareIter].coordinate.horizontal = H4;}

        else if(horIter == H5)
          {board -> square[squareIter].coordinate.horizontal = H5;}

        else if(horIter == H6)
          {board -> square[squareIter].coordinate.horizontal = H6;}

        else if(horIter == H7)
          {board -> square[squareIter].coordinate.horizontal = H7;}

        else if(horIter == H8)
          {board -> square[squareIter].coordinate.horizontal = H8;}

        // horizontal naming


        if(horIter == H1 || horIter == H2 || horIter == H7 || horIter == H8)
          {board -> square[squareIter].isEmpty = false;}
        else
          {board -> square[squareIter].isEmpty = false;}


        //for coloring
        if(horIter % 2 == 0)
        {
          if(squareIter % 2 == 0)
            {board -> square[squareIter].color = Black;}
          else
            {board -> square[squareIter].color = White;}
        }
        else
        {
          if(squareIter % 2 == 0)
            {board -> square[squareIter].color = White;}
          else
            {board -> square[squareIter].color = Black;}
        }// coloring ends


      }// each square of horIter ends

  }//biggest for ends

  return;

}
