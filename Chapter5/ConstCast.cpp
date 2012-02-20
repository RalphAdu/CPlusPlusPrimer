#include <iostream>
using namespace std;
int main()
{
    const int i = 10; 
    int *j = const_cast<int*>(&i);
    cout << "address of i: " << &i << endl;
    cout << "address of j: " << &j << endl;
    cout << "address that j point to: " << j << endl;
    cout << "before change, i = " << i << endl;
    cout << "before change, *j = " << *j << endl;
    *j = 100;
    cout << "after change, address of i: " << &i << endl;
    cout << "after change, address of j: " << &j << endl;
    cout << "after change, address that j point to: " << j << endl;
    cout << "after change, i = " << i << endl;
    cout << "after change, *j = " << *j << endl;
    return 0;
}
