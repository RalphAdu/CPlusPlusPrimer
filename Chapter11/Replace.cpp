#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;
int main()
{
	list<int> li(10, 1);
	replace(li.begin(), li.end(), 1, 40);

	list<int>::iterator iter = li.begin();
	while (iter != li.end())
	{
		cout << *iter << endl;
		iter++;
	}

	vector<int> vec;
	replace_copy(li.begin(), li.end(), back_inserter(vec), 40, 4);
	vector<int>::iterator iter2 = vec.begin();
	while (iter2 != vec.end())
	{
		cout << *iter2 << endl;
		iter2++;
	}


	return 0;
}
