#include "Truck.h"
Truck::Truck()
{
	truck_weight = 0;
}
void Truck::setWeight(int weight)
{
	truck_weight = weight;
}

int Truck::getWeight()const
{
	return truck_weight;
}
