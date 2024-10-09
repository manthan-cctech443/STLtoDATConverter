#include "Point.h"

Point::Point(int x, int y, int z) : x(x), y(y), z(z) {}

Point::~Point() {}

int Point::getX() const { return x; }
int Point::getY() const { return y; }
int Point::getZ() const { return z; }
