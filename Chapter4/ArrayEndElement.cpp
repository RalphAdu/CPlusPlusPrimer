#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    const size_t ary_size = 5;
    string str = "adu";
    string ary[ary_size] = {str, str, str, str, str};
    for (string  *pbegin = ary, *pend = ary + ary_size; pbegin != pend; pbegin++)
    {
	cout << *pbegin << endl;
	if (pbegin + 1 == pend)
	    cout << "one past end = " << *pend << endl;
    }

    vector<string> int_vec(ary_size, "adu");
    vector<string>::iterator ibegin = int_vec.begin(), iend = int_vec.end();
    while (ibegin != iend)
    {
	cout << *ibegin << endl;
	ibegin++;
    }
    cout << *iend << endl;

    return 0;
}
