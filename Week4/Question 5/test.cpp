#include<iostream>
#include"Rectangle.h"
using namespace std;
int main(void) {
	Rectangle Rect;
	Rect.setWidth(5);
	Rect.setHeight(7);
	// Print the area of the object.
	cout << "Total area: " << Rect.getArea() << endl;
	return 0;
}