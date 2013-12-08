#ifndef _PAGE_H_
#define _PAGE_H_

using namespace std;

class page
{
	public:

		page()
		{
			id = 0;
			searchKey = 0;
		}

		void makePage(int pageID, int sK)
		{
			id = pageID;
			searchKey = sK;
		}

		int getid()
		{
			return id;
		}

		int getKey()
		{
			return searchKey;
		}

	private:

		int searchKey;
		int id;
};

#endif
