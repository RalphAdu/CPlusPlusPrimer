#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
	list<int> ilist, ilist2, ilist3;
	for (list<int>::size_type i = 0; i <= 4; ++i)
		ilist.push_front(i);
	copy(ilist.begin(), ilist.end(), front_inserter(ilist2));
	copy(ilist.begin(), ilist.end(), inserter(ilist3, ilist3.begin()));

	list<int>::iterator iter = ilist.begin();
	while (iter != ilist.end())
	{
		cout << *iter << "\t";
		iter++;
	}
	cout << endl;

	list<int>::iterator iter2 = ilist2.begin();
	while (iter2 != ilist2.end())
	{
		cout << *iter2 << "\t";
		iter2++;
	}
	cout << endl;

	list<int>::iterator iter3 = ilist3.begin();
	while (iter3 != ilist3.end())
	{
		cout << *iter3 << "\t";
		iter3++;
	}
	cout << endl;
}
