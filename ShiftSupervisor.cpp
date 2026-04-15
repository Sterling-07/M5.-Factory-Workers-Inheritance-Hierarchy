
#include <iostream>
#include "ShiftSupervisor.h"
using namespace std;

ShiftSupervisor::ShiftSupervisor()
	: Employee(), annualSalary(0.0), annualProductionBonus(0.0) {}

ShiftSupervisor::ShiftSupervisor(const string& nm, int numb, const string& hire, int salary, double bonus)
	: Employee(nm, numb, hire), annualSalary(salary), annualProductionBonus(bonus) {}

void ShiftSupervisor::setAnnualSalary(double salary)
{
	annualSalary = salary;
}

void ShiftSupervisor::setAnnualProductionBonus(double bonus)
{
	annualProductionBonus = bonus;
}

double ShiftSupervisor::AnnualSalary() const
{
	return annualSalary;
}

double ShiftSupervisor::AnnualProductionBonus() const
{
	return annualProductionBonus;
}

void ShiftSupervisor::printShiftSupervisor() const
{
	printEmployee();
	cout << "Annual Salary: " << annualSalary << endl;
	cout << "Annual Production Bonus: " << annualProductionBonus << endl;
}
