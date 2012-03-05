#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> iset;
    //iset.insert(1);
    iset.insert(2);
    iset.insert(1);

    set<int>::iterator iter = iset.begin();
    while (iter != iset.end())
    {
	cout << *iter << endl;
	++iter;
    }
    return 0;
}
