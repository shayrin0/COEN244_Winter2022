#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee()
{

}
SalariedEmployee::SalariedEmployee(int id, string fname, string lname, float salary)
{
	Employee(id, fname, lname);
	setSalary(salary);


}

void SalariedEmployee::setSalary(float salary)
{
	this->salary = salary;
}

float SalariedEmployee::getSalary()
{
	return this->salary;
}