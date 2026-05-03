
#include "ProductionWorker.h"

ProductionWorker::ProductionWorker()
	: Employee(), shift(1), payRate(0.0) {}

ProductionWorker::ProductionWorker(const string& nm, int numb, const string& hire, int shf, double pay)
	: Employee(nm, numb, hire), shift(shf), payRate(pay) {}

void ProductionWorker::setShift(int shf)
{
	if (shf != 1 && shf != 2)
		throw InvalidShift();
	shift = shf;
}

void ProductionWorker::setPayRate(double pay)
{
	if (pay < 0)
		throw InvalidPayRate();
	payRate = pay;
}

int ProductionWorker::getShift() const
{
	return shift;
}

double ProductionWorker::getPayRate() const
{
	return payRate;
}

void ProductionWorker::printProductionWorker() const
{
	cout << "Shift: " << (shift == 1 ? "1" : "2") << endl;
	cout << "Hourly Pay Rate: " << payRate << endl;
}
