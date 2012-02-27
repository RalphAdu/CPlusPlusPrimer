#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int val1 = 11, val2 = 22;
    ostringstream format_string;
    format_string << "val1= " << val1 << "\nval2= " << val2 << "\n";
    cout << format_string.str() << endl;
    istringstream input(format_string.str());
    string dump;
    input >> dump >> val1 >> dump >> val2;
    cout << "val1: " << val1 << " val2: " << val2 << endl;
    return 0;
}
