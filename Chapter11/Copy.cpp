#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;
int main()
{
	list<int> li(10, 1);
	vector<int> vec;
	copy(li.begin(), li.end(), back_inserter(vec));

	vector<int>::iterator iter = vec.begin();
	while (iter != vec.end())
	{
		cout << *iter << endl;
		++iter;
	}
	return 0;
}
