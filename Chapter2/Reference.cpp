#include <iostream>
using namespace std;

int main()
{
    int i = 42;
    const int &r = 42;
    const int &r2 = r + i;
    cout << r << " , " << r2 << endl;
    i = 43;
    cout << r << ", " << r2 << endl;

    double d = 3.114;
    const int &r3 = d;
    cout << r3 << endl;
    return 0;
}
