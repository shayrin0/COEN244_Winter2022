#include "Vehicle.h"
using namespace std;
class Truck : public Vehicle
{
public:
	Truck(); //default constructor
	void setWeight(int);
	int getWeight()const;
protected:
	int truck_weight;
};

