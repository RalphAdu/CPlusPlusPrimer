#include <iostream>

using namespace std;

int main()
{
    int i = 8;
    int *const const_pointer = &i;
    cout << *const_pointer << endl;
    *const_pointer = 88;
    cout << *const_pointer << endl;

    const int const_int = 80;
    const int *const const_pointer2 = &const_int;
    cout << *const_pointer2 << endl;
    return 0;
}
