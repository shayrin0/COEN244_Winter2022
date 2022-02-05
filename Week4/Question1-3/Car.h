#include"Vehicle.h"
using namespace std;
class Car : public Vehicle{
public:
	Car();//default constructor
	void setpassCap(int);
	int getpassCap()const;
protected:
	int passCap;
};