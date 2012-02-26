#include <iostream>

using namespace std;
int incr(int &i)
{
    return ++i;
}

int main()
{
    //short sval = 10;
    int rtn = 0;
    //rtn = incr(sval);  // error: can't convert short to non-const int&
    //cout << rtn << endl;
    //rtn = incr(10 + 1);  // error: can't convert right value to non-const int&
    cout << rtn << endl;
    return 0;
}
