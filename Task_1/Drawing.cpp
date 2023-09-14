#include "Drawing.h"

// Add a shape to the drawing.
void Drawing::addShape(Shape* shape)
{
	shapes.push_back(shape);
}

// Calculate the total area of all shapes in the drawing.
int Drawing::totalArea()
{
	int totalArea = 0;
	for (Shape* s : shapes)
	{
		totalArea += s->area();
	}
	return totalArea;
}

