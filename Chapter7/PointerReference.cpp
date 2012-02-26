#include <iostream>
using namespace std;
void ptrswap(int *&a1, int *&a2)
{
    int *temp = a1;
    a1 = a2;
    a2 = temp; 
}

int main()
{
    int i = 1, j = 2;
    int *pi = &i, *pj = &j; 
    cout << "before swap: *pi = " << *pi << ", *pj = " << *pj << endl;
    ptrswap(pi, pj);
    cout << "after swap: *pi = " << *pi << ", *pj = " << *pj << endl;
    
    return 0;
}
