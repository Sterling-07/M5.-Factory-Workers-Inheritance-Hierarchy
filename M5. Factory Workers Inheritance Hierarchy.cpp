// M5. Factory Workers Inheritance Hierarchy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

void clearInput();
int getInt(const string& prompt);
double getDouble(const string& prompt);

ProductionWorker createProductionWorker();
ShiftSupervisor createShiftSupervisor();
TeamLeader createTeamLeader();

int main()
{
	int selection = 0;

	while (selection != 4)
	{
		cout << "\nMenu\n";
		cout << "1. Enter Production Worker\n";
		cout << "2. Enter Shift Supervisor \n";
		cout << "3. Enter Team Leader\n";
		cout << "4. Terminate\n";
		cout << "Selection: ";
		cin >> selection;

		if (cin.fail())
		{
			clearInput();
			cout << "There was an error, invalid Menu selection.\n";
			continue;
		}

		switch (selection)
		{
		case 1:
		{
			ProductionWorker worker = createProductionWorker();
			cout << "\nProduction Worker\n";
			worker.printProductionWorker();
			break;
		}

		case 2:
		{
			ShiftSupervisor supervisor = createShiftSupervisor();
			cout << "\nShift Supervisor\n";
			supervisor.printShiftSupervisor();
			break;
		}
		case 3:
		{
			TeamLeader leader = createTeamLeader();
			cout << "\nTeam Leader\n";
			leader.printTeamLeader();
			break;
		}
		case 4:
		{
			cout << "Closing Program.\n";
			break;
		}

		default:
			cout << "Invalid menu option entered.\n";
		}
	}

}

void clearInput()
{
	cin.clear();
	cin.ignore(10000, '\n');
}

int getInt(const string& prompt)
{
	int value;

	while (true)
	{
		cout << prompt;
		cin >> value;

		if (!cin.fail())
			return value;

		cout << "This is invalid input, enter a whole number.\n";
		clearInput();
	}
}

double getDouble(const string& prompt)
{
	double value;

	while (true)
	{
		cout << prompt;
		cin >> value;

		if (!cin.fail())
			return value;

		cout << "This is invalid input, enter a number.\n";
		clearInput();
	}
}

ProductionWorker createProductionWorker()
{
	string name, hire;
	int number, shift;
	double pay;

	cout << "\nProduction Worker\n";

	cout << "Enter name: ";
	cin >> name;

	cout << "Enter Hire Date: ";
	cin >> hire;

	while (true)
	{
		number = getInt("Employee Number (0-9999): ");

		try
		{
			ProductionWorker temp;
			temp.setNumber(number);
			break;
		}
		catch (Employee::InvalidEmployeeNumber&)
		{
			cout << "There was an error, the employee number must be between 0 - 9999.\n";
		}
	}

	while (true)
	{
		shift = getInt("Shift (1 = Day, 2 = Night): ");

		try
		{
			ProductionWorker temp;
			temp.setShift(shift);
			break;
		}
		catch (ProductionWorker::InvalidShift&)
		{
			cout << "There was an error, the shift must be either 1 or 2.\n";
		}
	}

	while (true)
	{
		pay = getDouble("Hourly Pay Rate: ");

		try
		{
			ProductionWorker temp;
			temp.setPayRate(pay);
			break;
		}
		catch (ProductionWorker::InvalidPayRate&)
		{
			cout << "There an error, pay rate must be positive.\n";
		}
	}

	return ProductionWorker(name, number, hire, shift, pay);
}

ShiftSupervisor createShiftSupervisor()
{
	cout << "\nShift Supervisor\n";

	string name, hire;
	int number;
	double salary, bonus;

	cout << "Enter name: ";
	cin >> name;

	cout << "Enter Hire Date: ";
	cin >> hire;

	number = getInt("Employee Number (0-9999): ");
	salary = getDouble("Annual Salary: ");
	bonus = getDouble("Annual Production Bonus: ");

	return ShiftSupervisor(name, number, hire, salary, bonus);
}

TeamLeader createTeamLeader()
{
	cout << "\nTeam Leader\n";

	string name, hire;
	int number, shift, required, attended;
	double pay, bonus;

	cout << "Enter Name: ";
	cin >> name;

	cout << "Enter Hire Date: ";
	cin >> hire;

	number = getInt("Employee Number (0-9999): ");
	shift = getInt("Shift (1 = Day, 2 = Night): ");
	pay = getDouble("Hourly Pay Rate: ");
	bonus = getDouble("Monthly Bonus: ");
	required = getInt("Required Training Hours: ");
	attended = getInt("Attended Training Hours: ");

	return TeamLeader(name, number, hire, shift, pay, bonus, required, attended);
}