#include <iostream>
using namespace std;

class Explicit
{
public:
//	Explicit(int a = 0) : age(a) {}
	explicit Explicit(int a = 0) : age(a) {}
	Explicit() {}
	bool isSame(Explicit compare) { return age == compare.age;}

	int age;
};

int main()
{
	int a = 1;
	Explicit ex1(22);
//	cout << (ex1.isSame(a) ? "The same" : "Different") << endl;
	cout << (ex1.isSame(Explicit(a)) ? "The same" : "Different") << endl;
}
