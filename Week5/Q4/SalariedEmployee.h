
#include "Employee.h"

class SalariedEmployee :public Employee{

public:
	SalariedEmployee();
	SalariedEmployee(int,string,string,float);
	void setSalary(float);
	float getSalary();

private:
	float salary;


};
