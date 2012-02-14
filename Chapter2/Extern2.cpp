#include "Extern1.h"
#include "Extern2.h"
#include <iostream>
using namespace std;

int UseIndex2()
{
    cout << "In Extern2.cpp. &index = " << &index << endl;
    return index;
}
