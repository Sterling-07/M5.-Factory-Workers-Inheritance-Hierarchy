
#include "Employee.h"

Employee::Employee()
	: name(""), number(0), hireDate("") {}


Employee::Employee(const string& nm, int numb, const string& hire)
	: name(nm), number(numb), hireDate(hire) {}

void Employee::setName(const string& nm)
{
	name = nm;
}

void Employee::setNumber(int numb)
{
	number = numb;
}

void Employee::setHireDate(const string& hire)
{
	hireDate = hire;
}

string Employee::getName() const
{
	return name;
}

int Employee::getNumber() const
{
	return number;
}

string Employee::getHireDate() const
{
	return hireDate;
}

void Employee::printEmployee() const
{
	cout << "Employee\n";
	cout << "Name: " << name << endl;
	cout << "Number: " << number << endl;
	cout << "Hired: " << hireDate << endl;
}
