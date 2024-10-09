#include "Reader.h"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>
using namespace std;

void Reader::readSTL(const string& filename, Triangulation& triangulation, vector<double>& uniquePoints) {
    ifstream inFile(filename);
    if (!inFile) {
        throw std::runtime_error("Unable to open file");
    }

    string line;

    while (getline(inFile, line)) {
        if (line.find("vertex") != string::npos) {
            istringstream iss(line);
            string vertex;
            double x, y, z;
            iss >> vertex >> x >> y >> z;

            int idx1 = findOrAddUniquePoint(x, y, z, uniquePoints);
            
            getline(inFile, line);
            iss.clear();
            iss.str(line);
            iss >> vertex >> x >> y >> z;
            int idx2 = findOrAddUniquePoint(x, y, z, uniquePoints);

            getline(inFile, line);
            iss.clear();
            iss.str(line);
            iss >> vertex >> x >> y >> z;
            int idx3 = findOrAddUniquePoint(x, y, z, uniquePoints);

            Point p1(idx1, idx1, idx1);
            Point p2(idx2, idx2, idx2);
            Point p3(idx3, idx3, idx3);

            triangulation.addTriangle(Triangle(p1, p2, p3));
        }
    }

    inFile.close();
}

int Reader::findOrAddUniquePoint(double x, double y, double z, vector<double>& uniquePoints) {
    for (size_t i = 0; i < uniquePoints.size(); i += 3) {
        if (uniquePoints[i] == x && uniquePoints[i + 1] == y && uniquePoints[i + 2] == z) {
            return i / 3; 
        }
    }

    uniquePoints.push_back(x);
    uniquePoints.push_back(y);
    uniquePoints.push_back(z);

    return (uniquePoints.size() / 3) - 1; 
}
