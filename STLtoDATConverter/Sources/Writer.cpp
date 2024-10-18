#include "Writer.h"
#include <stdexcept>

using namespace std;

// Writes triangle data and unique points to a DAT file
void Writer::writeDAT(const string& filename, const vector<Triangle>& triangles, const vector<double>& uniquePoints) {
    ofstream outFile(filename); // Open the output file
    if (!outFile) {
        throw runtime_error("Unable to open file"); // Handle file open error
    }

    // Iterate through each triangle in the collection
    for (const auto& triangle : triangles) {
        const Point& p1 = triangle.getP1(); // Get the first point of the triangle
        const Point& p2 = triangle.getP2(); // Get the second point of the triangle
        const Point& p3 = triangle.getP3(); // Get the third point of the triangle

        // Write the coordinates of each point to the file
        outFile << uniquePoints[p1.getX() * 3] << " " << uniquePoints[p1.getX() * 3 + 1] << " " << uniquePoints[p1.getX() * 3 + 2] << "\n";
        outFile << uniquePoints[p2.getX() * 3] << " " << uniquePoints[p2.getX() * 3 + 1] << " " << uniquePoints[p2.getX() * 3 + 2] << "\n";
        outFile << uniquePoints[p3.getX() * 3] << " " << uniquePoints[p3.getX() * 3 + 1] << " " << uniquePoints[p3.getX() * 3 + 2] << "\n";
        outFile << uniquePoints[p1.getX() * 3] << " " << uniquePoints[p1.getX() * 3 + 1] << " " << uniquePoints[p1.getX() * 3 + 2] << "\n\n\n";
    }

    outFile.close(); // Close the output file
}

