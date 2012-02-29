#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> ivec1(5, 1);
    vector<int> ivec2(10,2);
    vector<int>::iterator iter1 = ivec1.begin();
    vector<int>::iterator iter2 = ivec2.begin();

    cout << "before swap , ivec1: " << endl;
    while (iter1 != ivec1.end())
	cout << *iter1++ << endl;
    cout << "before swap , ivec2: " << endl;
    while (iter2 != ivec2.end())
	cout << *iter2++ << endl;

    iter1 = ivec1.begin();
    iter1 = iter1 + 3;
    cout << "before swap, *iter = " << *iter1 << endl;
    ivec1.swap(ivec2);
    cout << "after swap, *iter = " << *iter1 << endl;
    ++iter1;
    cout << "*iter++ = " << *iter1 << endl;

    iter1 = ivec1.begin();
    iter2 = ivec2.begin();
    cout << "after swap , ivec1: " << endl;
    while (iter1 != ivec1.end())
	cout << *iter1++ << endl;
    cout << "after swap , ivec2: " << endl;
    while (iter2 != ivec2.end())
	cout << *iter2++ << endl;
    return 0;
}
