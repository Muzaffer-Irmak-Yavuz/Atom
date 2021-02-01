#include "piece.h"


void init_pieces(Piece piece[32])
{

  //white starting pieces
  piece[0].color = White;
  piece[0].name = Rook;
  piece[0].coordinate.line = LINE_A;
  piece[0].coordinate.horizontal = H1;

  piece[1].color = White;
  piece[1].name = Knight;
  piece[1].coordinate.line = LINE_B;
  piece[1].coordinate.horizontal = H1;

  piece[2].color = White;
  piece[2].name = Bishop;
  piece[2].coordinate.line = LINE_C;
  piece[2].coordinate.horizontal = H1;

  piece[3].color = White;
  piece[3].name = Queen;
  piece[3].coordinate.line = LINE_D;
  piece[3].coordinate.horizontal = H1;

  piece[4].color = White;
  piece[4].name = King;
  piece[4].coordinate.line = LINE_E;
  piece[4].coordinate.horizontal = H1;

  piece[5].color = White;
  piece[5].name = Bishop;
  piece[5].coordinate.line = LINE_F;
  piece[5].coordinate.horizontal = H1;

  piece[6].color = White;
  piece[6].name = Knight;
  piece[6].coordinate.line = LINE_G;
  piece[6].coordinate.horizontal = H1;

  piece[7].color = White;
  piece[7].name = Rook;
  piece[7].coordinate.line = LINE_H;
  piece[7].coordinate.horizontal = H1;

  piece[8].color = White;
  piece[8].name = Pawn;
  piece[8].coordinate.line = LINE_A;
  piece[8].coordinate.horizontal = H2;

  piece[9].color = White;
  piece[9].name = Pawn;
  piece[9].coordinate.line = LINE_B;
  piece[9].coordinate.horizontal = H2;

  piece[10].color = White;
  piece[10].name = Pawn;
  piece[10].coordinate.line = LINE_C;
  piece[10].coordinate.horizontal = H2;

  piece[11].color = White;
  piece[11].name = Pawn;
  piece[11].coordinate.line = LINE_D;
  piece[11].coordinate.horizontal = H2;

  piece[12].color = White;
  piece[12].name = Pawn;
  piece[12].coordinate.line = LINE_E;
  piece[12].coordinate.horizontal = H2;

  piece[13].color = White;
  piece[13].name = Pawn;
  piece[13].coordinate.line = LINE_F;
  piece[13].coordinate.horizontal = H2;

  piece[14].color = White;
  piece[14].name = Pawn;
  piece[14].coordinate.line = LINE_G;
  piece[14].coordinate.horizontal = H2;

  piece[15].color = White;
  piece[15].name = Pawn;
  piece[15].coordinate.line = LINE_H;
  piece[15].coordinate.horizontal = H2;

  //white starting pieces end

  piece[16].color = Black;
  piece[16].name = Rook;
  piece[16].coordinate.line = LINE_A;
  piece[16].coordinate.horizontal = H8;

  piece[17].color = Black;
  piece[17].name = Knight;
  piece[17].coordinate.line = LINE_B;
  piece[17].coordinate.horizontal = H8;

  piece[18].color = Black;
  piece[18].name = Bishop;
  piece[18].coordinate.line = LINE_C;
  piece[18].coordinate.horizontal = H8;

  piece[19].color = Black;
  piece[19].name = Queen;
  piece[19].coordinate.line = LINE_D;
  piece[19].coordinate.horizontal = H8;

  piece[20].color = Black;
  piece[20].name = King;
  piece[20].coordinate.line = LINE_E;
  piece[20].coordinate.horizontal = H8;

  piece[21].color = Black;
  piece[21].name = Bishop;
  piece[21].coordinate.line = LINE_F;
  piece[21].coordinate.horizontal = H8;

  piece[22].color = Black;
  piece[22].name = Knight;
  piece[22].coordinate.line = LINE_G;
  piece[22].coordinate.horizontal = H8;

  piece[23].color = Black;
  piece[23].name = Rook;
  piece[23].coordinate.line = LINE_H;
  piece[23].coordinate.horizontal = H8;

  piece[24].color = Black;
  piece[24].name = Pawn;
  piece[24].coordinate.line = LINE_A;
  piece[24].coordinate.horizontal = H7;

  piece[25].color = Black;
  piece[25].name = Pawn;
  piece[25].coordinate.line = LINE_B;
  piece[25].coordinate.horizontal = H7;

  piece[26].color = Black;
  piece[26].name = Pawn;
  piece[26].coordinate.line = LINE_C;
  piece[26].coordinate.horizontal = H7;

  piece[27].color = Black;
  piece[27].name = Pawn;
  piece[27].coordinate.line = LINE_D;
  piece[27].coordinate.horizontal = H7;

  piece[28].color = Black;
  piece[28].name = Pawn;
  piece[28].coordinate.line = LINE_E;
  piece[28].coordinate.horizontal = H7;

  piece[29].color = Black;
  piece[29].name = Pawn;
  piece[29].coordinate.line = LINE_F;
  piece[29].coordinate.horizontal = H7;

  piece[30].color = Black;
  piece[30].name = Pawn;
  piece[30].coordinate.line = LINE_G;
  piece[30].coordinate.horizontal = H7;

  piece[31].color = Black;
  piece[31].name = Pawn;
  piece[31].coordinate.line = LINE_H;
  piece[31].coordinate.horizontal = H7;

}
