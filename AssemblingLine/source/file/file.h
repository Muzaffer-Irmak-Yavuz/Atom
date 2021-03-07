#ifndef FILE_H
#define FILE_H

/* common lib decl start */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/* common lib decl end */

/* linux lib decl start */
#include <fcntl.h>
#include <unistd.h>
/* linux lib decl end */

/* private lib decl start */
#include "../def/def.h"
/* private lib decl start */


/*private macro def start */
#define BUF_SIZE (2048)
/*private macro def end */

/* private function decl start*/
char *getDataFromFile(const char *fileName);
int changeImportance(Vocabulary *vocabulary, const char *english, int importance);
/* private function decl end*/

#endif
