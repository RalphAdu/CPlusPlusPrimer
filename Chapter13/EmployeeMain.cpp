#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;
int main()
{
	Employee em1;
	Employee em3 = em1;
	Employee em2(em1);
	Employee em4;
	em4 = em1;
	cout << endl;

	string name = "adu";

/*	
	Employee em5 = name;
	cout << endl;
	Employee em6;
	em6 = name;
	cout << endl;
*/

	cout << em1.getID() << endl;
	cout << em2.getID() << endl;
	cout << em3.getID() << endl;
	cout << em4.getID() << endl;
//	cout << em5.getName() << " , " << em5.getID() << endl;
//	cout << em6.getName() << " , " << em6.getID() << endl;

	return 0;
}
