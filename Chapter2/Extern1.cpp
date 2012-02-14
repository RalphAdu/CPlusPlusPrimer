#include "Extern1.h"
#include "Extern2.h"
#include <iostream>
using namespace std;

int UseIndex1()
{
    cout << "Use in Extern1, &index = " << &index << endl;
    return index;
}

int main()
{
    //extern const int index;
    int s = UseIndex1() + UseIndex2();
    cout << s << endl;
    return 0;
}
