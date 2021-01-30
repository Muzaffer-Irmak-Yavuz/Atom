#include "mymalloc.h"



void *mymalloc(size_t size)
{
  // how much page we allocate
  static int page_count = 1;
  // our actual size for allocation
  size_t total_size = size + sizeof(size_t);

  //if the size given by user is bigger then page size we must round it to multiple of page size
  //check for allocation overflow
  size_t allocation_overflow = total_size % page_size;

  // if @param size is bigger then page size there is allocation overflow
  // if there is allocation overflow we just round total_size to page size

  //TODO check is it allignment
  if(allocation_overflow > 0)
  {
    page_count++;
    total_size += page_size - allocation_overflow;
  }
  //after that section @param total_size is always smaller then multiple of page size

  // we call the mmap syscall and @param NULL means we dont care about starting address of mapping
  // @param total_size says how much byte we want to allocate
  // @param PROT_EXEC ,PROT_READ ,PROT_WRITE says page may executeed ,read or written
  // @param MAP_PRIVATE says map won't shared with other processes in same program
  void *data = mmap(NULL ,total_size, PROT_EXEC | PROT_READ | PROT_WRITE , MAP_PRIVATE , 0 , 0);

  // size_ptr will point to stored size at first element
  size_t *size_ptr =(size_t *)data;

  size_ptr[0] = total_size;


  // void pointer to allocated memory for return
  void* allocated_mem_pointer = &size_ptr[1];

  return allocated_mem_pointer;
}
