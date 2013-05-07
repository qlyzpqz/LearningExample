#include <cstdio>
#include <cstdlib>
using namespace std;

int main ()
{
	int * p;

	p = (int *)malloc(sizeof(int));

	free(p);

	p = new int(5);
	delete p;

	return 0;
}
