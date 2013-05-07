#include <cstdio>
#include <cstdlib>
#include "real_malloc.h"
using namespace std;

extern "C" void * __wrap_malloc(size_t size)
{
	void * addr = __real_malloc(size);

	printf("malloc	addr : %08x		size : %-8d\n", (unsigned int)addr, size);
	return addr;
}
