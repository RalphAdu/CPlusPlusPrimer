#include <iostream>
using namespace std;

int main()
{
    int len = 10;
    int *intAry = new int[len]();
    for (int i = 0; i < len; i++)
        cout << intAry[i] << endl;
    return 0;
}
