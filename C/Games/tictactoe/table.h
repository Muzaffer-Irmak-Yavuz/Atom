#if !defined TABLE_H
#define TABLE_H

#include <stdio.h>

#define TABLE_ROW_SIZE 5
#define TABLE_COLUMN_SIZE 10

char gameTable[TABLE_ROW_SIZE][TABLE_COLUMN_SIZE];


void table_init();
/*
                     :   :
                  ---:---:---
                     :   :
                  ---:---:---
                     :   :
*/

void table_print();



#endif
