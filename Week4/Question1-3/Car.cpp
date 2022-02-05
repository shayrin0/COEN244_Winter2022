#include "Car.h"
Car::Car()
{
	passCap = 0;
}
void Car::setpassCap(int pcap)
{
	passCap = pcap;
}

int Car::getpassCap()const
{
	return passCap;
}
