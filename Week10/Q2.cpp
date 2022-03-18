
#include <iostream>
#include <string>

using namespace std;

//Create a class named ‘date’ with the following requirements:​
//
//Private three attributes named “month”, “day”, and “year”​
//
//Constructor to initialize the attributes ​
//
//Friend method that overloads the output stream operator “<<”  
//to print the date in the “m/d/y” format.

// print an error message
class DateException
{
private:
    string msg;
    
public:
    DateException(string user_msg)
    {
        msg = user_msg;
    }
    
    void show_msg()
    {
        cout << msg << endl;
    }
};

class InvalidDayException : public DateException
{
public:
    InvalidDayException() : DateException("Days Sould Be Between 1 and 31") {};
};

class InvalidMonthException : public DateException
{
public:
    InvalidMonthException() : DateException("Months Sould Be Between 1 and 12") {};
};

class InvalidYearException : public DateException
{
public:
    InvalidYearException() : DateException("The Person should be older than 18!") {};
};

//Write a code to handle the following exceptions:​
//Age Permission; your age under 18​
//Invalid day: (1-31)  ​
//Invalid month: (1-12)  

class Date
{
private:
    int day=0, month=0, year=0;
    
public:
    Date(int d=1, int m=1, int y=2000)
    {
        if (m > 12)
            throw InvalidMonthException();
        if (d > 31)
            throw InvalidDayException();
        if (y > 2002)
            throw InvalidYearException();
        day = d;
        month = m;
        year = y;
    }
    
    friend ostream& operator << (ostream& os, const Date& dt);
};

ostream& operator << (ostream& os, const Date& dt)
{
    os << dt.month << "/"  << dt.day << "/" << dt.year << endl;
    return os;
}

//Friend method that overloads the output stream operator “<<”  
//to print the date in the “m/d/y” format.​

int main()
{
    try
    {
        Date dt(12, 5, 1990);
        cout << dt;
    }
    catch(DateException& er)
    {
        er.show_msg();
    }
    
    return 0;
}
