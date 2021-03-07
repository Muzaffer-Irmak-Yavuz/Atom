#include "strings.h"
#include "../warn/warn.h"


void parseInputIntoWords(Vocabulary *vocabulary , char *engbuffer , char *trbuffer)
{
  /* possible error checks */
  warn(vocabulary == NULL ,here , self);
  warn(engbuffer == NULL ,here , self);
  warn(trbuffer == NULL ,here , self);


  /* allocation space for words */
  vocabulary->words = (Word *)malloc(sizeof(Word));
  warn(vocabulary->words == NULL ,here , self);

  /* allocation space for temporary buffer */
  char *tempEng = (char *)malloc(sizeof(char )*15);
  warn(tempEng == NULL ,here , self);

  char *tempTr = (char *)malloc(sizeof(char )*15);
  warn(tempTr == NULL ,here , self);

  size_t wordCounter = 0;

  /* get token in string */
  tempEng = strtok(engbuffer, ",");
  fatal(tempEng == NULL , here , self);
  strcpy(vocabulary->words[wordCounter++].english , tempEng);


  while(1)
  {
    tempEng = strtok(NULL, ",");
    if (tempEng == NULL)
      break;

    strcpy(vocabulary->words[wordCounter++].english , tempEng);
  }


  tempTr = strtok(trbuffer, ",");
  fatal(tempTr == NULL , here , self);
  strcpy(vocabulary->words[wordCounter++].turkish , tempTr);

  while (1)
  {
    tempTr = strtok(NULL, ",");
    if (tempTr == NULL)
      break;

    strcpy(vocabulary->words[wordCounter++].turkish , tempTr);

  }

  
  vocabulary->wordCount = wordCounter;



  free(tempTr);
  free(tempEng);
}
