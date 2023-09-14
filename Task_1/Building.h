#pragma once
#include "Drawing.h"

class Building
{
private:
	Drawing floor; // A Drawing object representing the floors of the building.

public:
	// Add a floor to the building's Drawing.
	void addFloor(Shape* shape);

	// Calculate the total area of all the floors in the building.
	int totalBuildingArea();
};


