#ifndef DEF_H
#define DEF_H

#include <stdint.h>

#define MAX_CHAR 25

struct Word
{
  char english[MAX_CHAR];
  char turkish[MAX_CHAR];
  uint8_t faultCount;
  uint8_t properties;
};
typedef struct Word Word;

struct Vocabulary
{
  Word *words;
  uint16_t wordCount;
};
typedef struct Vocabulary Vocabulary;



#endif
