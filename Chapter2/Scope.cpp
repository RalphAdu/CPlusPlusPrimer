#include <iostream>
using namespace std;

int main()
{
    int i = 100, sum = 0, j = 0;
    cout << "outside j = " << j << endl;
    for (int i = 0; i != 10; ++i)
    {
        sum += i;
	int j = 1;
	cout << "inside j = " << j << endl;
    }
    cout << "Sum from 0 to " << i << " is " << sum << endl;
    return 0;
}
