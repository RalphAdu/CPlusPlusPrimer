#include <iostream>

using namespace std;

int main()
{
// if compile with -DNDEBUG then the following wont' be print
#ifndef NDEBUG
    cerr << "starting main" << endl;
#endif
    cout << "out of NDEBUG macro" << endl;
    cout << "in file: " << __FILE__
	 << " line: " << __LINE__
	 << " compiled at " << __TIME__
	 << " on " << __DATE__
	 << endl;
    return 0;
}
