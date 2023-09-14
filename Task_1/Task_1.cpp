// Task 1.
// 
// Part 1:
// Create a base class called `Shape`: The `Shape` class should have a virtual function `area()` that calculates the area of the shape.
// The `Shape` class should also have a constructor that takes the name of the figure(e.g., "Circle," "Rectangle") and any other necessary parameters.
// Create classes for specific geometric shapes that inherit from `Shape`: 
// Create classes `Circle`, `Rectangle`,and `Triangle`, which inherit from `Shape`and implement the `area()` function to calculate the area of each specific figure.
// 
// Part 2:
// Create a class called `Drawing` that uses composition: 
// The `Drawing` class should have a field that represents an array(or list) of objects of type `Shape`. 
// Use standard C++ facilities, such as `std::vector`, to store these objects.
// Create a method `addShape()` that adds a shape to the array of objects.
// Create a method `totalArea()` that calculates the total area of all shapes in the collection.
// 
// Part 3:
// Create a class called `Building` that uses aggregation: 
// The `Building` class should have a field that represents an object of type `Drawing`, indicating a set of geometric figures describing the building.
// Create a method `addFloor()` that adds a new floor to the building by adding shapes to the `Drawing`. 
// Create a method `totalBuildingArea()` that calculates the total area of all floors in the building.
// Create a program that creates objects of different geometric shapes, adds them to `Drawing`and `Building` collections, 
// and displays the total area for each collection.
//

#include <iostream>
#include "Building.h"
#include "Circle.h"
#include "Drawing.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"

using namespace std;

int main()
{
    // Create a Building object to represent a multi-floor structure.
    Building* build = new Building();

    // Add different shapes (floors) to the building.
    // Each shape represents a floor with its specific dimensions.
    build->addFloor(new Circle("Circle", 10));
    build->addFloor(new Rectangle("Rectangle", 20, 10));
    build->addFloor(new Triangle("Triangle", 25, 20));

    // Calculate and display the total area of all floors in the building.
    cout << "Total building area: " << build->totalBuildingArea() << " square units" << endl;
}