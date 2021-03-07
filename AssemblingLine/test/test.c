#include "../source/warn/warn.h"
#include "../source/file/file.h"
#include "../source/def/def.h"
#include "../source/strings/strings.h"

static void test_file_can_read(void)
{
  const char *fileName ="/home/muzaffer/Masaüstü/AssemblingLine/english.txt";
  char *actual = getDataFromFile(fileName);

  if (actual != NULL)
  {
    printf("test_file_can_read : passed\n");
  }
  else
  {
    printf("test_file_can_read : failed\n");
  }
}

Vocabulary *test_parseInputIntoWords(void)
{
  const char *fileNameEng ="/home/muzaffer/Masaüstü/AssemblingLine/english.txt";
  const char *fileNameTr ="/home/muzaffer/Masaüstü/AssemblingLine/turkish.txt";


  Vocabulary vocabulary;


  char *actualEng = getDataFromFile(fileNameEng);
  char *actualTr = getDataFromFile(fileNameTr);

  parseInputIntoWords(&vocabulary , actualEng , actualTr);

  for (size_t i = 0; i < vocabulary.wordCount; i++)
  {
    printf("%s",vocabulary.words[i].english );
    printf("%s\n",vocabulary.words[i].turkish );


    if (vocabulary.words[i].english == NULL ||
        vocabulary.words[i].turkish == NULL)
    {
      printf("test_parseInputIntoWords : failed\n");

    }

  }

  printf("----------------------------------------------\n" );
  changeImportance(&vocabulary,vocabulary.words[1].english , 5);

  printf("test_parseInputIntoWords : passed\n");
  return NULL;
}







int main(void)
{
  test_file_can_read();
  test_parseInputIntoWords();


//  test_changeImportance(&vocab);

  return 0;
}
