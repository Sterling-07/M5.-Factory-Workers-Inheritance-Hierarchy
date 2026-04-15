// M5. Factory Workers Inheritance Hierarchy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

int main()
{
	Employee emp("Kate", 804, "01/15/2026");
	ProductionWorker worker("Jay", 901, "10/22/2025", 2, 20.00);
	ShiftSupervisor supervisor("Samantha", 789, "07/12/2025", 30000, 2000);
	TeamLeader leader("Logan", 537, "04/30/2024", 1, 35, 500, 40, 37);


	emp.printEmployee();
	worker.printProductionWorker();
	supervisor.printShiftSupervisor();
	leader.printTeamLeader();
}


