
#include "TeamLeader.h"
#include <iostream>
using namespace std;

TeamLeader::TeamLeader()
	: ProductionWorker(), monthlyBonus(0.0), requiredHours(0), attendedHours(0) {}

TeamLeader::TeamLeader(const string& nm, int numb, const string& hire, int shf, double pay, double bonus, int required, int attended)
	: ProductionWorker(nm, numb, hire, shf, pay), monthlyBonus(bonus), requiredHours(required), attendedHours(attended) {}

void TeamLeader::setMonthlyBonus(double bonus)
{
	monthlyBonus = bonus;
}

void TeamLeader::setRequiredHours(int hour)
{
	requiredHours = hour;
}

void TeamLeader::setAttendedHours(int hour)
{
	attendedHours = hour;
}

double TeamLeader::getmonthlyBonus() const
{
	return monthlyBonus;
}

int TeamLeader::getrequiredHours() const
{
	return requiredHours;
}

int TeamLeader::getattendedHours() const
{
	return attendedHours;
}

void TeamLeader::printTeamLeader() const
{
	printProductionWorker();
	cout << "Monthly Bonus: " << monthlyBonus << endl;
	cout << "Required Training Hours: " << requiredHours << endl;
	cout << "Attended Training Hours: " << attendedHours << endl;
}