#pragma once
#include <vector>
#include "Triangle.h"
using namespace std;

class Triangulation {
private:
    vector<Triangle> triangles;

public:
    void addTriangle(const Triangle& triangle);
    vector<Triangle> getTriangles() const;
};
