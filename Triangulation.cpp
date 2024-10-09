#include "Triangulation.h"
using namespace std;

void Triangulation::addTriangle(const Triangle& triangle) {
    triangles.push_back(triangle);
}

vector<Triangle> Triangulation::getTriangles() const {
    return triangles;
}
