#include "C:\Users\Manthan Sawant\Desktop\STLtoDATConverter\Headers\Point.h"

// Constructor to initialize a point with given coordinates
Point::Point(int x, int y, int z) : x(x), y(y), z(z) {}

// Destructor (currently does nothing)
Point::~Point() {}

// Getter for the X coordinate
int Point::getX() const { return x; }

// Getter for the Y coordinate
int Point::getY() const { return y; }

// Getter for the Z coordinate
int Point::getZ() const { return z; }

