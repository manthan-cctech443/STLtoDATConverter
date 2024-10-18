#include "C:\Users\Manthan Sawant\Desktop\STLtoDATConverter\Headers\Triangulation.h"

using namespace std;

// Adds a triangle to the collection
void Triangulation::addTriangle(const Triangle& triangle) {
    triangles.push_back(triangle); // Store the triangle in the vector
}

// Returns the collection of triangles
vector<Triangle> Triangulation::getTriangles() const {
    return triangles; // Return the vector of triangles
}
