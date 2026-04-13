#pragma once

#include <iostream>
#include <string>
using namespace std;

class Employee 
{
private:
	string name;
	int number;
	string hireDate;
public:
	Employee();
	Employee(const string& nm, int numb, const string& hire);

	void setName(const string& nm);
	void setNumber(int numb);
	void setHireDate(const string& hire);

	string getName() const;
	int getNumber() const;
	string getHireDate() const;

	void printEmployee() const;
};