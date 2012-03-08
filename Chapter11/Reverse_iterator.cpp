#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;
int main()
{
	int iray[] = {1, 2, 3, 4, 1};
	list<int> ilst(iray, iray + 5);

	list<int>::reverse_iterator riter = ilst.rbegin();
	while (riter != ilst.rend())
		cout << *riter++ << " ";
	cout << endl;

	list<int>::iterator iter = ilst.begin();
	while (iter != ilst.end())
		cout << *iter++ << " ";
	cout << endl;
	
	riter = find(ilst.rbegin(), ilst.rend(), 1);
	iter = ilst.begin();
	while (iter != --riter.base())
		cout << *iter++ << " ";
	cout << endl;

	return 0;
}
