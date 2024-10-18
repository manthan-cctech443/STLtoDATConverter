#include "C:\Users\Manthan Sawant\Desktop\STLtoDATConverter\Headers\Reader.h"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>

using namespace std;

// Reads an STL file and populates the triangulation and unique points
void Reader::readSTL(const string& filename, Triangulation& triangulation, vector<double>& uniquePoints) {
    ifstream inFile(filename); // Open the STL file
    if (!inFile) {
        throw std::runtime_error("Unable to open file"); // Handle file open error
    }

    string line;

    // Read the file line by line
    while (getline(inFile, line)) {
        // Check for lines containing vertex information
        if (line.find("vertex") != string::npos) {
            istringstream iss(line);
            string vertex;
            double x, y, z;

            // Extract vertex coordinates
            iss >> vertex >> x >> y >> z;

            // Find or add the unique point for each vertex
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

            // Create Point objects using the unique point indices
            Point p1(idx1, idx1, idx1);
            Point p2(idx2, idx2, idx2);
            Point p3(idx3, idx3, idx3);

            // Add a triangle formed by the three points to the triangulation
            triangulation.addTriangle(Triangle(p1, p2, p3));
        }
    }

    inFile.close(); // Close the file
}

// Finds or adds a unique point and returns its index
int Reader::findOrAddUniquePoint(double x, double y, double z, vector<double>& uniquePoints) {
    // Check if the point already exists in the uniquePoints vector
    for (size_t i = 0; i < uniquePoints.size(); i += 3) {
        if (uniquePoints[i] == x && uniquePoints[i + 1] == y && uniquePoints[i + 2] == z) {
            return i / 3; // Return the index if found
        }
    }

    // Add the new unique point to the vector
    uniquePoints.push_back(x);
    uniquePoints.push_back(y);
    uniquePoints.push_back(z);

    return (uniquePoints.size() / 3) - 1; // Return the index of the newly added point
}
