#pragma once

#include "Employee.h"
#include <string>

class ProductionWorker : public Employee
{
private:
	int shift;
	double payRate;

public:
	ProductionWorker();
	ProductionWorker(const string& nm, int numb, const string& hire, int shf, double pay);

	void setShift(int shf);
	void setPayRate(double pay);

	int getShift() const;
	double getPayRate() const;

	void printProductionWorker() const;
};