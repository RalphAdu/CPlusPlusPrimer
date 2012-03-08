#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	//vector<int> vec(10, 1);
	//fill(vec.begin(), vec.end(), 0);
	vector<int> vec;
	//fill_n(vec.begin(), 10, 0); // error, the vector is empty
	fill_n(back_inserter(vec), 10, 0);

	vector<int>::iterator iter = vec.begin();
	while (iter != vec.end())
	{
		cout << *iter << endl;
		++iter;
	}
	return 0;
}
