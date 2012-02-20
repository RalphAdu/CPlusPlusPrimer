#include <iostream>
using namespace std;
int main()
{
    cout << "size of char: " << sizeof(char) << endl;
    cout << "size of short: " << sizeof(short) << endl;
    cout << "size of int: " << sizeof(int) << endl;
    cout << "size of long: " << sizeof(long) << endl;
    cout << "size of long double: " << sizeof(long double) << endl;
    cout << "size of int&: " << sizeof(int &) << endl;
    cout << "size of long&: " << sizeof(long &) << endl;
    cout << "size of long double&: " << sizeof(long double &) << endl;
    cout << "size of double&: " << sizeof(double &) << endl;
    long double i = 8;
    long double &j = i;
    cout << "size of long double reference j: " << sizeof j << endl;
    cout << "address of i: " << &i << endl;
    cout << "address of j: " << &j << endl;

    struct A{};
    cout << "size of empty struct A: " << sizeof(A) << endl;

    int x[10];
    int *p = x;
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;
    return 0;
}
