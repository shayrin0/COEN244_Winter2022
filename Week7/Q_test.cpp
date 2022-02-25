
//You want to add the length, width and breadth of 2 boxes
//create a class BOX, 
//
//write the set and get functions
//write the constructor and destructor
//create an overloaded constructor

#include <iostream>
using namespace std;

class Box
{
private:
    double height;
    double length;
    double breadth;
    
public:
    Box();
    
    void set_length(double length);
    void set_height(double height);
    void set_breadth(double breadth);
    
    double get_length(void);
    double get_height(void);
    double get_breadth(void);
    
    double getVolume(void);
    
    Box operator +(const Box& b) 
    {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
    
    ~Box() {;}
};

Box::Box()
{
    length = 0;
    height = 0;
    breadth = 0;
}

void Box::set_length(double length)
{
    this->length = length;
}

void Box::set_height(double height)
{
    this->height = height;
}

void Box::set_breadth(double breadth)
{
    this->breadth = breadth;
}

double Box::get_length(void)
{
    return length;
}

double Box::get_height(void)
{
    return height;
}

double Box::get_breadth(void)
{
    return breadth;
}

double Box::getVolume(void)
{
    return length * breadth * height;
}

int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.set_length(12.0); 
   Box1.set_breadth(71.0); 
   Box1.set_height(9.0);
 
   // box 2 specification
   Box2.set_length(6.0); 
   Box2.set_breadth(7.0); 
   Box2.set_height(5.0);
 
   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   // Add two object as follows:
   Box3 = Box1 + Box2;

   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}
