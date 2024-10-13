#pragma once

#include "Triangulation.h"
#include <string>
#include <vector>

using namespace std;

// Class responsible for reading STL files and managing unique points
class Reader {
private:
    // Finds or adds a unique point to the uniquePoints vector and returns its index
    int findOrAddUniquePoint(double x, double y, double z, vector<double>& uniquePoints); 

public:
    // Reads an STL file and populates the triangulation and unique points
    void readSTL(const string& filename, Triangulation& triangulation, vector<double>& uniquePoints);
};
