#if !defined TABLE_H
#define TABLE_H

#include <stdio.h>
#include <stdint.h>


#define TABLE_ROW_COUNT 5
#define TABLE_COLUMN_COUNT 11

char gameTable[TABLE_ROW_COUNT][TABLE_COLUMN_COUNT];


void init_table();


void print_table();




#endif
