
//Create a class named ‘complex_number’ with the 
//following requirements:​
//Private two attributes named “real” and “image”​
//Constructor to initialize the attributes by zero​
//Public method named by “input” to set the attributes 
//by the user​
//Overload the operator “+”  that defines the summation 
//over complex numbers​
//Overload the operator “==”  that compares complex numbers   

#include <iostream>
using namespace std;

class complex_number
{
private:
    int real;
    int imag;
    
public:
    complex_number()
    {
        real = 0;
        imag = 0;
    }
    
    complex_number(int real1, int imag1) 
                    : real(real1), imag(imag1)
    {
        
    }
    
    void set_real(int real)
    {
        this->real = real;
    }
    
    void set_imag(int imag)
    {
        this->imag = imag;
    }
    
    int get_real()
    {
        return real;
    }
    
    int get_imag()
    {
        return imag;
    }
    
    void input()
    {
        cout << "Enter the real and imaginary parts: "
        cin >> real;
        cin >> imag;
    }
    
//Overload the operator “+”  that defines the summation 
//over complex numbers​
    complex_number operator +(const complex_number& num)
    {
        complex_number result;
        result.real = this->real + num.real;
        result.imag = this->imag + num.imag;
        return result;
    }
    
    ~complex_number() {;}
};

int main()
{
    
    
    return 0;
}