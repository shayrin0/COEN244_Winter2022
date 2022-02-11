#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee()
{

}
HourlyEmployee::HourlyEmployee(int id,string fname,string lname,int workingHours,float hourWage)//:Employee(id, fname, lname)
{
	Employee(id, fname, lname);
	setWorkingHours(workingHours);
	setHourWage(hourWage);
}

void HourlyEmployee::setWorkingHours(int workingHours)
{
	this->workingHours = workingHours;
}

int HourlyEmployee::getWorkingHours()
{
	return this->workingHours;
}

void HourlyEmployee::setHourWage(float hourWage)
{
	this->hourWage = hourWage;
}

float HourlyEmployee::getHourWage()
{
	return this->hourWage;
}

float HourlyEmployee::getSalary()
{
	return this->workingHours * this->hourWage;
}