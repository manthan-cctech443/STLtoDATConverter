#include "Writer.h"
#include <stdexcept>
using namespace std;

void Writer::writeDAT(const string& filename, const vector<Triangle>& triangles, const vector<double>& uniquePoints) {
    ofstream outFile(filename);
    if (!outFile) {
        throw runtime_error("Unable to open file");
    }

    for (const auto& triangle : triangles) {
        const Point& p1 = triangle.getP1();
        const Point& p2 = triangle.getP2();
        const Point& p3 = triangle.getP3();

        outFile << uniquePoints[p1.getX() * 3] << " " << uniquePoints[p1.getX() * 3 + 1] << " " << uniquePoints[p1.getX() * 3 + 2] << "\n";
        outFile << uniquePoints[p2.getX() * 3] << " " << uniquePoints[p2.getX() * 3 + 1] << " " << uniquePoints[p2.getX() * 3 + 2] << "\n";
        outFile << uniquePoints[p3.getX() * 3] << " " << uniquePoints[p3.getX() * 3 + 1] << " " << uniquePoints[p3.getX() * 3 + 2] << "\n";
        outFile << uniquePoints[p1.getX() * 3] << " " << uniquePoints[p1.getX() * 3 + 1] << " " << uniquePoints[p1.getX() * 3 + 2] << "\n\n\n";
    }

    outFile.close();
}

