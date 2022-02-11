#include <string>
#include "Employee.h"
Employee::Employee()
{

}
Employee::Employee(int id, string fname, string lname)
{
	setID(id);

	setFName(fname);

}

void Employee::setID(int id)
{
	this->id = id;
}

int Employee::getID()
{
	return this->id;
}

void Employee::setFName(string fname)
{
	this->fName = fname;
}

string Employee::getFName()
{
	return this->fName;
}



void Employee::setLName(string lname)
{
	this->lName = lname;
}

string Employee::getLName()
{
	return this->lName;
}