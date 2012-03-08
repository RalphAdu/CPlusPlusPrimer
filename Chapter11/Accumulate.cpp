#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main()
{
	vector<double> ivec(5, 100.0);
	double sum = accumulate(ivec.begin(), ivec.end(), 0);
	cout << "sum of the int vector: " << sum << endl;
}
