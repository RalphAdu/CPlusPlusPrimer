#include <iostream>
using namespace std;
void printary(int (&ary)[5])
{
    cout << "begin of printatr function" << endl;
    for (size_t i = 0; i != 5; ++i)
    {
	cout << ary[i] << "\t";
    }
    cout << endl;
    cout << "end of printary function" << endl;
}

int main()
{
    int ary[5] = {1, 2, 3, 4, 5};
    printary(ary);
    return 0;
}
