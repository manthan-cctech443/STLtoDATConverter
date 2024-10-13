#pragma once

#include "Point.h"

// Class representing a triangle in 3D space defined by three points
class Triangle {
private:
    Point p1, p2, p3; // Points that define the vertices of the triangle

public:
    // Constructor to initialize a triangle with three given points
    Triangle(const Point& p1, const Point& p2, const Point& p3);
    
    // Destructor
    ~Triangle();

    // Getter for the first point
    Point getP1() const;
    
    // Getter for the second point
    Point getP2() const;
    
    // Getter for the third point
    Point getP3() const;
};

