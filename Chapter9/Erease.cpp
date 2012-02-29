#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int>::size_type size = 5;
    list<int> ilist;
    for (list<int>::size_type i = 0; i != size; ++i)
    {
	ilist.push_back(i);
    }
    list<int>::iterator iter = ilist.begin();
    cout << "origin data" << endl;
    while (iter != ilist.end())
    {
	cout << *iter++ << endl;
    }
    iter = ilist.begin();
    list<int>::iterator iter2 = iter;
    cout << "iter = " << *iter << endl;
    iter2 =++(++iter2);
    cout << "iter2 = " << *iter2 << endl;
    ilist.erase(iter, iter2);
    iter = ilist.begin();
    cout << "after erase" << endl;
    while (iter != ilist.end())
    {
	cout << *iter++ << endl;
    }

    return 0;
}
