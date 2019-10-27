#include "zmalloc.h"

#define PREFIX_SIZE (0)
void *zmalloc(size_t size){
	void *ptr =malloc(size+PREFIX_SIZE);
	return  (char *)ptr + PREFIX_SIZE;
}
