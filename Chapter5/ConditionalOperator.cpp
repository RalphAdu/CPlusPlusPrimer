#include <iostream>
using namespace std;
int main()
{
    int i = 10, j = 20;
    cout << ((i < j) ? i : j) << endl;
    cout << (i < j) ? i : j;
    cout << endl;
    cout << (i < j) << endl;
    cout ? i : j;
    return 0;
}
