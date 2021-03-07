#include "file.h"
#include "../warn/warn.h"


char *getDataFromFile(const char *fileName)
{
  /* open file with flag read only */
  int fd = open(fileName , O_RDONLY);
  fatal(fd < 0 ,here,self);

  /* allocate space for reading */
  char *buffer = (char *)malloc(sizeof(char) * BUF_SIZE);
  fatal(buffer == NULL ,here,self);

  /* read data from file */
  int readCheck = read(fd , buffer , BUF_SIZE);
  fatal(readCheck == 0 , here,self);

  close(fd);
  return buffer;
}


int changeImportance(Vocabulary *vocabulary, const char *english, int importance)
{

  /*
  printf("debuuuuuuuuuuuuuuuuuuuuug\n");
  for (size_t i = 0; i < vocabulary->wordCount; i++)
  {
    printf("%s",vocabulary->words[i].english );
    printf("%s\n",vocabulary->words[i].turkish );
  }
  */

  FILE *file = fopen("/home/muzaffer/Masaüstü/AssemblingLine/importance.txt" , "r+");

  char *buffer = (char *)malloc(sizeof(char)*MAX_CHAR);
  char *nonquot =(char *)malloc(sizeof(char)*MAX_CHAR);
  char *newEnglish =(char *)malloc(sizeof(char)*MAX_CHAR);
  char *finalGet =(char *)malloc(sizeof(char)*MAX_CHAR);



  int a = printf("%s",english );
  int actualEng = a - 2;
  strncpy(newEnglish,english+1,actualEng);



  for (int i = 0; i < vocabulary->wordCount/2-1; i++)
  {

    fgets(buffer,MAX_CHAR,file);
    nonquot = strtok(buffer,",");


    printf("\n printable :%s, strlen(printable):%lu\n",newEnglish, strlen(newEnglish));




    if (strncmp(nonquot , newEnglish,strlen(newEnglish)) == 0)
    {
      printf("bulundu\n");
      fseek(file ,-2 ,SEEK_CUR);
      fprintf(file, "%d\n",importance);
      break;
    }





  }


  free(buffer);
  /*
  char buffer[MAX_CHAR];
  for (size_t i = 0; i < vocabulary->wordCount; i++)
  {
    read(file ,buffer , MAX_CHAR);



  }
  */
  fclose(file);

  return 0;
}
