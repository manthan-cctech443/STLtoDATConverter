#pragma once

#include "Triangle.h"
#include <fstream>
#include <vector>

using namespace std;

// Class responsible for writing triangle data to a file
class Writer {
public:
    // Writes the triangles and unique points to a DAT file
    void writeDAT(const string& filename, const vector<Triangle>& triangles, const vector<double>& uniquePoints);
};
