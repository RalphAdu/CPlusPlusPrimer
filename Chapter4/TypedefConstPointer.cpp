#include <iostream>

using namespace std;

int main()
{
    typedef int *pint;
    int normal_int = 10;
    int normal_int2 = 2;

    const pint const_pointer = &normal_int;
    cout << "const_pointer: " << *const_pointer << endl;
//  const_pointer = &normal_int2;    //error, can't change the object it point to
    pint const const_pointer2 = &normal_int;    //the same to "const pint"
    cout << "const_pointer2: " << *const_pointer2 << endl;
//  const_pointer2 = &normal_int2;   //error, the same

    return 0;
}
