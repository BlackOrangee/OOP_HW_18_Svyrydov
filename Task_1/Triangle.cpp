#include "Triangle.h"

// Constructor for the Triangle class.

Triangle::Triangle(string name, int side_a, int side_b) : Shape(name)
{
    // Initialize the name using the base class constructor.
    // Set the values of side_a and side_b based on the provided arguments.
    this->side_a = side_a;
    this->side_b = side_b;
}

// Override the area() function to calculate the area of the triangle.
int Triangle::area()
{
    // Calculate and return the area of the triangle using the formula.
    return 0.5 * side_a * side_b;
}
