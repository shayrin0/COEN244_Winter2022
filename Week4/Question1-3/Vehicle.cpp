#include"Vehicle.h"
#include<string>
using namespace std;
Vehicle::Vehicle() {
	vehicle_Model = "";
	mileage = 0;
	vehicle_id = "";
}
void Vehicle::setvModel(string model) {
	vehicle_Model = model;
}
string Vehicle::getvModel()const {
	return vehicle_Model;
}
void Vehicle::setvMileage(int mile) {
	mileage = mile;
}
int Vehicle::getvMileage()const {
	return mileage;
}
void Vehicle::setvID(string vID) {
	vehicle_id = vID;
}
string Vehicle::getvID()const {
	return vehicle_id;
}