#pragma once

#include "Triangle.h"
#include <vector>

using namespace std;

// Class for managing a collection of triangles
class Triangulation {
private:
    vector<Triangle> triangles; // Vector to store triangles

public:
    // Adds a triangle to the collection
    void addTriangle(const Triangle& triangle);
    
    // Returns the collection of triangles
    vector<Triangle> getTriangles() const;
};
