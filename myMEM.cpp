#include <cstdlib>
#include "page.h"

using namespace std;

void Allocate(page p)
{
	page p = new page();
	p = (page) malloc (1000);
}
void Deallocate(page p)
{
	delete[] p;
}
