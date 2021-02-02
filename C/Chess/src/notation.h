#if !defined NOTATION_H_INCLUDED
#define NOTATION_H_INCLUDED




struct Notation
{

  int round :1;
  char result[4];
  char plyCount[4];
  char eco[5];
  char blackElo[5];
  char whiteElo[5];
  char date[11];
  char eventDate[11];
  char site[30];
  char whiteName[30];
  char blackName[30];
  char event[120];
};

typedef struct Notation Notation;


#endif
