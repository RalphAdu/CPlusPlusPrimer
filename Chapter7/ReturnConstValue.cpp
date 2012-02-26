#include <iostream>
using namespace std;

const int &firstary(int &a)
{
    return a;
}

int main()
{
    int a = 1;
    const int &a0 = firstary(a);
    int a1 = firstary(a);
    cout << a0 << endl;
    cout << a1 << endl;

    a1 = 11;
    cout << a1 << endl;
    //a0 = 111; //error: read only
    //cout << a << endl;
    return 0;
}
