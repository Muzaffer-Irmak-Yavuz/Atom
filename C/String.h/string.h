#if !defined STRING_H
#define STRING_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#define ERR_NULL_STRING (1)


bool forceReset = false;

char *string(char *);
void strdel(char *);

char iter(char *string);

size_t strMlen(char *);


uint8_t strstr(char * , char *);
int8_t strMcpy(char * , char *);

uint8_t strcmp(char * , char *);














#endif
