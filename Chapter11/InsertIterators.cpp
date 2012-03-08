#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> vec;
	list<int> ilist1, ilist2, ilist3;
	for (int i = 0; i < 10; ++i)
		vec.push_back(i);
	
	replace_copy(vec.begin(), vec.end(), inserter(ilist1, ilist1.begin()), 0, 10);
	replace_copy(vec.begin(), vec.end(), back_inserter(ilist2), 0, 10);
	replace_copy(vec.begin(), vec.end(), front_inserter(ilist3), 0, 10);

	list<int>::iterator iter = ilist1.begin();
	while (iter != ilist1.end())
	{
		cout << *iter << "\t";
		iter++;
	}
	cout << endl;

	iter = ilist2.begin();
	while (iter != ilist2.end())
	{
		cout << *iter << "\t";
		iter++;
	}
	cout << endl;

	iter = ilist3.begin();
	while (iter != ilist3.end())
	{
		cout << *iter << "\t";
		iter++;
	}
	cout << endl;
	return 0;
}
