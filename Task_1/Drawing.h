#pragma once
#include "Shape.h"
#include <vector>

// The Drawing class represents a collection of shapes in a drawing.
class Drawing
{
private:
    vector<Shape*> shapes;  // A vector to store pointers to Shape objects.

public:
    // Add a shape to the drawing.
    void addShape(Shape* shape);

    // Calculate the total area of all shapes in the drawing.
    int totalArea();
};


