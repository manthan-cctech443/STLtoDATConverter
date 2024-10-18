#include "Reader.h"
#include "Writer.h"
#include "Triangulation.h"
#include <iostream>

using namespace std;

int main() {
    Triangulation triangulation; // Create a Triangulation object
    Reader reader; // Create a Reader object
    vector<double> uniquePoints; // Vector to store unique points

    try {
        // Read the STL file and populate the triangulation and unique points
        reader.readSTL("input.stl", triangulation, uniquePoints);
    }
    catch (const runtime_error& e) {
        cerr << "Error reading STL: " << e.what() << endl; // Handle read error
        return 1;
    }

    Writer writer; // Create a Writer object
    try {
        // Write the triangulation data and unique points to a DAT file
        writer.writeDAT("output.dat", triangulation.getTriangles(), uniquePoints);
    }
    catch (const runtime_error& e) {
        cerr << "Error writing DAT: " << e.what() << endl; // Handle write error
        return 1;
    }

    cout << "Finished writing to output.dat." << endl; // Indicate completion
    return 0;
}

