#if !defined MYMALLOC_H
#define  MYMALLOC_H

#include <unistd.h>
#include <sys/mman.h>
#include <stdint.h>


void* mymalloc(size_t size);


int page_size = getpagesize();

















#endif
