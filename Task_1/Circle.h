#pragma once
#include "Shape.h"

// Circle Class
// Represents a circle shape with a name and radius.
class Circle : public Shape
{
private:
    int radius;  // Radius of the circle.

public:
    // Constructor for the Circle class.
    Circle(string name, int radius);

    // Override the area() function to calculate the area of the circle.
    int area() override;
};


