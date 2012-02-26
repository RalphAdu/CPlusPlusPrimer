#include <iostream>
#include <stdarg.h>

using namespace std;

int getmax(const int, const int, ...);
void printmax(int count, int a, ...)
{
    va_list ap;
    va_start(ap, a);

    int max = a;
    int value = 0;
    for (int i = 1; i != count; ++i)
    {
        value = va_arg(ap, int);
	if (value > max)
	    max = value;
    }
    va_end(ap);

    cout << max << endl;

}

int main()
{

    int a = 1, b = 2, c = 3, d = 4, e = 5;
    cout << getmax(2, a, b) << endl;
    cout << getmax(5, a, b, c, d, e) << endl;

    printmax(4, 1, 2, 2, 3);
    return 0;
}


int getmax(const int count, const int ival, ...)
{
    va_list va;
    va_start(va, ival);

    int max = ival;
    for (int i = 1; i != count; ++i)
    {
	int value = va_arg(va, int);
	if (value > max)
	    max = value;
    }
    va_end(va); // don't remember add this macro!!!
    return max;
}

