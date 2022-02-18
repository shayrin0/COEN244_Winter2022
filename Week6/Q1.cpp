#include<iostream>
#include<string>
using namespace std;

class Student {
protected:
	string fname;
	string lname;
	int id;

public:
	Student(int id, string fname, string lname)
	{
        this->id = id; // setId(id)
        this->fname = fname;
        this->lname = lname;
	}

	void setId(int id)
	{
        this->id = id;
//        this->id = id;
	}

	int getId()
	{
        return id;
	}

	void setFname(string fname)
	{
        this->fname = fname;
	}

	string getFname()
	{
        return fname;
	}

	void setLname(string lname)
	{
        this->lname = lname;
	}

	string getLname()
	{
        return lname;
	}

	virtual void printInformation() 
	{
        cout << "Student ID: " << id << "\nFirstname: " << fname << "\nLastname: " << lname << endl;
	}

	~Student(){}

};

class UndergraduateStudent : public Student {

protected:
	string status;
    
public:
	UndergraduateStudent(int id, string fname, string lname, string status) : Student(id, fname, lname)
	{   
        this->status = status;
	}

	void setStatus(string status)
	{
        this->status = status;
	}

	string getStatus()
	{
        return status;
	}

	 void printInformation() 
	{
        cout << "Student ID: " << id << "\nFirstname: " << fname << "\nLastname: " << lname << 
                "\nStudent status: " << status << endl;
	}

	~UndergraduateStudent(){}

};

class GraduateStudent : public Student {

protected:
	string status;

public:
	GraduateStudent(int id, string fname, string lname, string status) : Student(id, fname, lname)
	{
        this->status = status;
	}

	void setStatus(string status)
	{
        this->status = status;
	}

	string getStatus()
	{
        return status;
	}

	void printInformation()
	{
        cout << "Student ID: " << id << "\nFirstname: " << fname << "\nLastname: " << lname << 
                "\nStudent status: " << status << endl;
	}

	~GraduateStudent(){}

};

int main()
{
	Student *s1 = new Student(123, "jone", "smith");
    s1->printInformation();

    Student* s2 = new UndergraduateStudent(456, "ahmad", "sami","Undergraduate");
    s2->printInformation();
    
//    UndergraduateStudent ugs;

    Student* s3 = new GraduateStudent(456, "rose", "jonson", "Graduate");
    s3->printInformation();
    
    
    Student *s4;
    UndergraduateStudent ugs2(1234, "koa", "panahi","Undergraduate");
    s4 = &ugs2;
    
    s4->printInformation();
    
//    UndergraduateStudent *ugs = new UndergraduateStudent(456, "rose", "jonson", "Undergraduate");
//    ugs->printInformation();

	return 0;
}
