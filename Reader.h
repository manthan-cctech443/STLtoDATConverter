#pragma once
#include <string>
#include <vector>
#include "Triangulation.h"
using namespace std;

class Reader {
private:
    int findOrAddUniquePoint(double x, double y, double z, vector<double>& uniquePoints); 

public:
    void readSTL(const string& filename, Triangulation& triangulation, vector<double>& uniquePoints);
};
