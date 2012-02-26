#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char **argv)
{
    if (argc != 3)
    {
	cout << "usage: MainParameter Number1 Number2" << endl;
	return 1;
    }
    //double ival1 = reinterpret_cast<double>(argv[1]); // runtime error: convert to wrong number
    //double ival2 = reinterpret_cast<double>(argv[2]); // runtime error: convert to wrong number
    double sum = atof(argv[1]) + atof(argv[2]);
    cout << sum << endl;
    return 0;
}
