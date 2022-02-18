#include<iostream>
#include<string>
using namespace std;

class Student {
protected:
	string fName;
	string lName;
	int id;

public:

	Student(){}

	Student(int id, string fname, string lname)
	{
	}

	void setId(int id)
	{
	}

	int getId()
	{
	}

	void setFname(string fname)
	{
	}

	string getFname()
	{
	}

	void setLname(string lname)
	{
	}

	string getLname()
	{
	}

	void print()
	{
	}

	virtual void printInformation()
	{
	}

	~Student(){}

};

class UndergraduateStudent : public Student {

protected:
	string status;
public:
	UndergraduateStudent(int id, string fname, string lname, string status)
	{
	}

	void setStatus(string status)
	{
	}

	string getStatus()
	{
	}

	 void printInformation() 
	{
	}

	~UndergraduateStudent(){}
};

class GraduateStudent : public Student {

protected:
	string status;

public:
	GraduateStudent(int id, string fname, string lname, string status)
	{
	}

	void setStatus(string status)
	{
	}

	string getStatus()
	{
	}

	void printInformation()
	{
	}

	~GraduateStudent(){}
};

int main()
{

	return 0;
}
