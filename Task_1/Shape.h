#pragma once
#include <iostream>
using namespace std;

// Shape class represents a generic geometric shape.
class Shape
{
private:
    string name; // The name of the shape.

public:
    // Constructor to initialize the shape with a given name.
    Shape(string);

    // Pure virtual function to calculate the area of the shape.
    virtual int area() = 0;
};


