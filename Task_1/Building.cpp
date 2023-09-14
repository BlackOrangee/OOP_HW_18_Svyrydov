#include "Building.h"

// Add a floor (represented by a Shape object) to the building's Drawing.
void Building::addFloor(Shape* shape)
{
	floor.addShape(shape);
}

// Calculate and return the total area of all the floors in the building.
int Building::totalBuildingArea()
{
	return floor.totalArea();
}

