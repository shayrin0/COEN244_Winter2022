//#include<string>
#include "Employee.h"
//using namespace std;
class HourlyEmployee: public Employee{

public:
	HourlyEmployee();
	HourlyEmployee(int, string, string, int, float);
	void setWorkingHours(int);
	int getWorkingHours();

	void setHourWage(float);
	float getHourWage();
	float getSalary();
private:
	int workingHours;
	float hourWage;
};
