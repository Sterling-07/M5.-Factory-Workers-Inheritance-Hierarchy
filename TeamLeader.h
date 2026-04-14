#pragma once

#include "ProductionWorker.h"
#include <iostream>
using namespace std;

class TeamLeader : public ProductionWorker
{
private:
	double monthlyBonus;
	double requiredHours;
	double attendedHours;

public:
	TeamLeader();
	TeamLeader(const string& nm, const string& hire, int numb, int shf, double pay, double bonus, int required, int attended);

	void setMonthlyBonus(double bonus);
	void setRequiredHours(int hour);
	void setAttendedHours(int hour);

	double getmonthlyBonus() const;
	int getrequiredHours() const;
	int getattendedHours() const;

	void printTeamLeader() const;
};