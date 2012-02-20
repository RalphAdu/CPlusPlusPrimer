#include <iostream>
using namespace std;
int main()
{
    char a = 'A';
    int b = a;
    cout << a << "\t" << b << endl;

    int *c = &b;
    char *d = reinterpret_cast<char*>(c);
//  char *d = c;    //error
    cout << *c << "\t" << *d << endl;
    return 0;
}
