#include <iostream>
using namespace std;
int arysum1(const int (*iray)[5])
{
    int sum = 0;
    for (size_t i = 0; i != 5; ++i)
    {
	sum += (*iray)[i];	
	//++(*iray)[i]; // error: const element can't be changed
    }
    return sum;
}

int arysum4(const int (&iray)[5])
{
    int sum = 0;
    for (size_t i = 0; i != 5; ++i)
    {
	sum += iray[i];
	//++iray[i];  // error: const element can't be changed 
    }
    return sum;
}

int arysum2(const int *beg, const int *end)
{
    int sum = 0;
    while (beg != end)
    {
	sum += *beg;
	beg++;
    }
    return sum;
}

int arysum3(const int *iary, size_t size)
{
    int sum = 0;
    for (size_t i = 0; i != size; ++i)
	sum += iary[i];
    return sum;
}

int main()
{
    int iray[5] = {12, 3, 55, 32, 123};
    cout << arysum1(&iray) << endl;
    cout << arysum2(iray, iray + 5) << endl;
    cout << arysum3(iray, 5) << endl;
    cout << arysum4(iray) << endl;
    return 0;
}
