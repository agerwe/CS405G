#include <cstdlib>
#include <vector>
#include "page.h"
#include "myMEM.cpp"
#include <string>

using namespace std;

vector <page> vPages;
void Insert( string g)
{
	for(int i = 0; i < vPages.size(); i++)
	{
		//vPages[i].find();
	}

	//if there is no page or the pages are full
		page p;
		myMEM m;
		m.Allocate(p);
		vPages.push_back(p);
	return;
}

void Delete(string g)
{
        for(int i = 0; i < vPages.size(); i++)
        {
                //vPages[i].find();
		//if its found
		{
			//vPages[i].delete();
			//if page empty deallocate the page
		}
        }
}

int Size()
{
	int number = vPages.size();
	return number;
}

bool isEmpty()
{}
page Search(page p)
{}
void print()
{}

