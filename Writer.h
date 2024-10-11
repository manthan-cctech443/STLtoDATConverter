#pragma once
#include <fstream>
#include <vector>
#include "Triangle.h"
using namespace std;

class Writer {
public:
    void writeDAT(const string& filename, const vector<Triangle>& triangles, const vector<double>& uniquePoints);
};

