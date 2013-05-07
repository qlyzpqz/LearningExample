#include "real_malloc.h"
#include <cstdlib>
using namespace std;

extern "C" void * __real_malloc(size_t size)
{
	return malloc(size);
}
