#include <string>
using namespace std;
class Vehicle {
	public:
	Vehicle();// default constructor
	void setvModel(string);// set vehicle model
	string getvModel()const;//return vehicle model
	void setvMileage(int);// set vehicle mileage
	int getvMileage()const;// return vehicle mileage
	void setvID(string);// set vehicle ID
	string getvID()const;// return vehicle ID
protected:
	string vehicle_Model; //vehicle model
	int mileage; //vehicle mileage
	string vehicle_id;//vehicle id
};

