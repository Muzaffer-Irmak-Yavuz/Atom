#include "string.h"




size_t strMlen(const char *string)
{

  size_t counter = 0;
  while(*string)
    counter++;

  return counter;
}


int8_t strMcpy(char *desc ,const char *source)
{
  if (NULL == source)
  {
    return ERR_NULL_STRING;
  }

  while(*source)
    *desc++ = *source++;


  desc[-1] = strMlen(source);
  return EXIT_SUCCESS;
}


char *string(char *string)
{
  size_t *memory =(size_t *)malloc(sizeof(char) * strMlen(string) + sizeof(char));

  memory[0] = strMlen(string);
  char *str = (char *) &memory[1];

  return str;
}


char iter(char *string)
{

  static bool reset = false;
  char *deneme = (char *)malloc(sizeof(char));

  if(!reset)
    

  static size_t stringIter = 0;

  if(!reset)
    return givenStr[stringIter++];


  if(stringIter == strMlen(givenStr))
  {


      reset = true;
      givenStr = NULL;
      stringIter = 0;


    return EXIT_SUCCESS;
  }



  if(forceReset)
  {
    reset = true;
    givenStr = NULL;
    stringIter = 0;
    return EXIT_SUCCESS;
  }

  return EXIT_SUCCESS;



}




/*
uint8_t strstr(char *haystack , char *needle)
{
  if(haystack == NULL || needle == NULL)
    return ERR_NULL_STRING;

  for(size_t hayCounter = 0; hayCounter < strMlen(haystack); hayCounter++)
  {
    if(haystack[hayCounter] == needle[hayCounter])
    {
      for(size_t needleCounter = 0; needleCounter < strMlen(needle); needleCounter ++)
      {

      }
    }
  }
}
*/
