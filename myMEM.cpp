#include <cstdlib>
#include "page.h"

using namespace std;

class myMEM
{
	public:
		void Allocate(page p)
		{
			//p = (page) malloc (1000);
		}
		void Deallocate(page * p)
		{
			delete[] p;
		}
};
