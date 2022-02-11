#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
class Employee {
	
public:
	Employee();
	Employee(int, string, string);

	void setID(int);

	int getID();

	void setFName(string);

	string getFName();

	void setLName(string);

	string getLName();

private:
	int id;
	string fName;
	string lName;
};

#endif