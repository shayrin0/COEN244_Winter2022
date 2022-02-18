#include <string>
#include<iostream>
using namespace std;
class Employee {

public:
	Employee(){}

	void setID(int id)
	{
		this->id = id;
	}

	int getID()
	{
		return this->id;
	 }

	void setFName(string fname)
	{
		this->fName = fname;
	 }

	string getFName()
	{
		return this->fName;
	 }

	void setLName(string lname)
	{
		this->lName = lname;
	 }

	string getLName()
	{
		return this->lName;
	 }

	virtual void print(){}

	
private:
	int id;
	string fName;
	string lName;
	
};

class FullTimeEmployee :public Employee {

public:
	FullTimeEmployee(){}
	FullTimeEmployee(int id, string fname, string lname, float salary) // :Employee(id, fname,lname)
	{
		setID(id);
		setFName(fname);
		setLName(lname);
		setSalary(salary);
	}

	void setSalary(float salary)
	{
		this->salary = salary;
	}
	float getSalary()
	{
		return this->salary;
	}
	virtual void print()
	{
		cout << "Full Time Employee with Salary = " << getSalary() << endl;
	}

private:
	
	float salary;
};


class PartTimeEmployee :public Employee {

public:
	PartTimeEmployee(){}
	PartTimeEmployee(int id, string fname, string lname, float salary)
	{
		setID(id);
		setFName(fname);
		setLName(lname);
		setSalary(salary);
	}

	void setSalary(float salary)
	{
		this->salary = salary;
	}
	float getSalary()
	{
		return this->salary;
	}
	virtual void print()
	{
		cout << "Part Time Employee with Salary = " << getSalary() << endl;
	}

private:
	
	float salary;
};

int main()
{
	Employee* fe1 = new FullTimeEmployee(123, "Jone", "Smith", 3000);

	fe1->print();


	Employee* pe1 = new PartTimeEmployee(456, "Daniel", "Jack", 7000);

	pe1->print();

	return 0;

}

