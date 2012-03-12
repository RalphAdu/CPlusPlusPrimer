#include "Employee.h"

int Employee::newid = 1;

Employee::Employee() : id(newid)
{
	std::cout << "In default constructor, id = " << id << std::endl;
	++newid;
}

Employee::Employee(std::string sname) : id(newid), name(sname)
{
	std::cout << "In single parameter constructor, id = " << id << std::endl;
	++newid;
}
// copy constructor
Employee::Employee(const Employee &old) : id(newid), name(old.getName())
{
	std::cout << "In copy constructor, id = " << id << std::endl;
	++newid;
}

Employee& Employee::operator=(const Employee &old)
{
	std::cout << "In aissign function, id = " << id << std::endl;
	if (&old != this)
		name = old.getName();
	return *this;
}
