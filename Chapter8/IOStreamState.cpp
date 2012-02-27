#include <iostream>
#include <limits>
#include <stdexcept>
using namespace std;
int main()
{
    int val = 0;
    while (cin >> val, !cin.eof())
    {
	if (cin.bad())
	{
	    throw runtime_error("IO stream corrupted");
	}
	if (cin.fail())
	{
	    cerr << "bad data, try again." << endl;
	    cin.clear(istream::goodbit);
	    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	    continue;
	}
	cout << "input value = " <<  val << endl;
    }
    return 0;
}
