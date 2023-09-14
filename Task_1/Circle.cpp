#include "Circle.h"

// Constructor for the Circle class.
Circle::Circle(string name, int radius) : Shape(name)
{
	this->radius = radius;
}

// Override the area() function to calculate the area of the circle.
int Circle::area()
{
	return 3.14 * radius * radius;	// Calculate the area using the formula.
}
