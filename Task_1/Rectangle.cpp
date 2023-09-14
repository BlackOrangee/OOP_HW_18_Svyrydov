#include "Rectangle.h"

// Constructor for the Rectangle class. It initializes a rectangle with a given name and side lengths.
Rectangle::Rectangle(string name, int side_a, int side_b) : Shape(name)
{
    this->side_a = side_a;
    this->side_b = side_b;
}

// Override the area() function to calculate the area of the rectangle.
int Rectangle::area()
{
    return side_a * side_b;
}
