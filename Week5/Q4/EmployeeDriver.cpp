//#include "Employee.h"
#include<string>
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include<iostream>
using namespace std;

int main()
{
	int empid = 0;
	int workingHours = 0;
	string fname;
	string lname;
	float salary=0.0, hourWage=0.0;
	
	cout << "Enter the ID for the first salaried employee: ";
	cin >> empid;
	cout << "\nEnter the first name for the first salaried employee: ";
	cin >> fname;
	cout << "\nEnter the last name for the first salaried employee: ";
	cin >> lname;
	cout << "\nEnter the montly salary for the first salaried employee: ";
	cin >> salary;

	SalariedEmployee se1(empid, fname, lname, salary);


	cout << "Enter the ID for the second salaried employee: ";
	cin >> empid;
	cout << "\nEnter the first name for the second salaried employee: ";
	cin >> fname;
	cout << "\nEnter the last name for the second salaried employee: ";
	cin >> lname;
	cout << "\nEnter the montly salary for the second salaried employee: ";
	cin >> salary;

	SalariedEmployee se2(empid, fname, lname, salary);


	cout << "Enter the ID for the first hourly employee: ";
	cin >> empid;
	cout << "\nEnter the first name for the first hourly employee: ";
	cin >> fname;
	cout << "\nEnter the last name for the first hourly employee: ";
	cin >> lname;
	cout << "\nEnter working hours for the first hourly employee: ";
	cin >> workingHours;

	cout << "\nEnter hour wage for the first hourly employee: ";

	cin >> hourWage;
	
	HourlyEmployee he1(empid, fname, lname, workingHours, hourWage);

	cout << "Enter the ID for the second hourly employee: ";
	cin >> empid;
	cout << "\nEnter the first name for the second hourly employee: ";
	cin >> fname;
	cout << "\nEnter the last name for the second hourly employee: ";
	cin >> lname;
	cout << "\nEnter working hours for the second hourly employee: ";
	cin >> workingHours;

	cout << "\nEnter hour wage for the second hourly employee: ";

	cin >> hourWage;

	HourlyEmployee he2(empid, fname, lname, workingHours, hourWage);

	// print the information for each employee object

	cout << "Average alary for the employees = " << ((se1.getSalary() + se2.getSalary() + he1.getSalary() + he2.getSalary()) / 4) << endl;

	return 0;
}