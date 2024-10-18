#include "C:\Users\Manthan Sawant\Desktop\STLtoDATConverter\Headers\Triangle.h"

// Constructor to initialize a triangle with three given points
Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3) : p1(p1), p2(p2), p3(p3) {}

// Destructor (currently does nothing)
Triangle::~Triangle() {}

// Getter for the first point of the triangle
Point Triangle::getP1() const { return p1; }

// Getter for the second point of the triangle
Point Triangle::getP2() const { return p2; }

// Getter for the third point of the triangle
Point Triangle::getP3() const { return p3; }
