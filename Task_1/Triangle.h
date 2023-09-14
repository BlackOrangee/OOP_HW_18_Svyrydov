#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:
    int side_a; // Length of the first side.
    int side_b; // Length of the second side.

public:
    // Constructor for the Triangle class. Initializes a triangle with a given name and side lengths.
        Triangle(string name, int side_a, int side_b);

    // Override the area() function to calculate the area of the triangle.
    int area() override;
};
