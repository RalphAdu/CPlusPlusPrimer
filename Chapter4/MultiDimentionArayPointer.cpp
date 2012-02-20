#include <iostream>
using namespace std;
int main()
{
    int a1 = 1;
    int a2 = 2;
    int a3 = 3;
    const size_t arySize = 3;

    int *pointerToInt[arySize] = {&a1, &a2, &a3};  //pointer array, whose element point to int number
    for (size_t i = 0; i < arySize; i++)
	cout << pointerToInt[i] << "\t" << *pointerToInt[i]<< endl;

    int ary1[arySize] = {a1, a2, a3};
    int ary2[arySize] = {a1, a2, a3};
    const size_t aryNum = 2;

    typedef int arySize_int_array[arySize];
    typedef arySize_int_array *arySize_int_array_pointer;

    arySize_int_array_pointer pointerToIntAry[aryNum] = {&ary1, &ary2};
    for (size_t i = 0; i != aryNum; i ++)
    {
	
	for (size_t j = 0; j != arySize; j++)
	    cout << pointerToIntAry[i][j] << "\t";
	cout << endl;
    }
    cout << endl;
    return 0;
}
