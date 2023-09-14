#pragma once
#include "Shape.h"

// Rectangle class is derived from the Shape class and represents a rectangle shape.
class Rectangle : public Shape
{
private:
    int side_a; // Length of one side of the rectangle.
    int side_b; // Length of the other side of the rectangle.

public:
    // Constructor to initialize the rectangle with a given name, side lengths.
    Rectangle(string, int, int);

    // Override the area() function to calculate the area of the rectangle.
    int area() override;
};

