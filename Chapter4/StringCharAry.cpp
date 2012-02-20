#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str = "hello";
    const char *cstr = str.c_str();
    cout << cstr << endl;
    return 0;
}
