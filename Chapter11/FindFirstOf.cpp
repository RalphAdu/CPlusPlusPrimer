#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int iary1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int iary2[] = {10, 2, 9};
	int *p = 0;
	while ((p = find_first_of(iary1, iary1 + 10, iary2, iary2 + 3) != (iary1 + 10)))
	{
		cout << *p << endl;
	}
}
