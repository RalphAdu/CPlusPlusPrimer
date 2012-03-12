#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <iostream>

class Employee
{
public:
	Employee();
//	Employee(std::string sname);
	explicit Employee(std::string sname);
	// copy constructor
	Employee(const Employee &old);
	Employee& operator=(const Employee &old);

	int getID() const { return id; }
	std::string getName() const { return name; }

private:
	static int newid;
	int id;
	std::string name;
};

#endif
