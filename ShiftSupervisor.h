#pragma once

#include "Employee.h"
#include <iostream>
using namespace std;

class ShiftSupervisor : public Employee
{
private:
	double annualSalary;
	double annualProductionBonus;

public:
	ShiftSupervisor();
	ShiftSupervisor(const string& nm, int numb, const string& hire, int salary, double bonus);

	void setAnnualSalary(double salary);
	void setAnnualProductionBonus(double bonus);

	double AnnualSalary() const;
	double AnnualProductionBonus() const;

	void printShiftSupervisor() const;
};