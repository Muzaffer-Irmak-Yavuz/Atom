#ifndef OPTIONS_H
#define OPTIONS_H

#include <stdint.h>
#include <stdio.h>

#define READ_ONLY  0x01 // 00000001
#define WRITE_ONLY 0X02 // 00000010




uint64_t options = 0;

#define SET_OPTION(BF ,N) BF |= ((uint64_t)0x01 << N)
#define CLEAR_OPTION(BF ,N) BF &= ~((uint64_t)0x01 << N)
#define GET_OPTION(BF ,N) ((BF >> N) & 0x01)




#endif
