#include<iostream>
#include"Car.h"
//#include"Truck.h"
using namespace std;
int main()
{
	Car* type1 = new Car();
	type1->setvModel("toyota");
	type1->setvMileage(10000);
    type1->setvID("1234");
	type1->setpassCap(34);
	cout <<type1->getvModel()<<" "<<type1->getpassCap() <<" "<< type1->getvID();
	//Truck* t1 = new Truck();
	//t1->setvID("5678");
	//t1->setvMileage(150000);
	//t1->setvModel("Benz");
	//t1->setWeight(400);
	//cout<<t1->getvModel()<<" "<< t1->getvID()<<" "<<t1->getWeight();
	return 0;
}