#include "C:\Users\Manthan Sawant\Desktop\STLtoDATConverter\Headers\Reader.h"
#include "C:\Users\Manthan Sawant\Desktop\STLtoDATConverter\Headers\Writer.h"
#include "C:\Users\Manthan Sawant\Desktop\STLtoDATConverter\Headers\Triangulation.h"
#include <iostream>

using namespace std;

int main() {
    Triangulation triangulation; // Create a Triangulation object
    Reader reader; // Create a Reader object
    vector<double> uniquePoints; // Vector to store unique points

    try {
        // Read the STL file and populate the triangulation and unique points
        reader.readSTL("C:\\Users\\Manthan Sawant\\Desktop\\STLtoDATConverter\\Inputs\\input.stl", triangulation, uniquePoints);
    }
    catch (const runtime_error& e) {
        cerr << "Error reading STL: " << e.what() << endl; // Handle read error
        return 1;
    }

    Writer writer; // Create a Writer object
    try {
        // Write the triangulation data and unique points to a DAT file
        writer.writeDAT("C:\\Users\\Manthan Sawant\\Desktop\\STLtoDATConverter\\Outputs\\output3.dat", triangulation.getTriangles(), uniquePoints);
    }
    catch (const runtime_error& e) {
        cerr << "Error writing DAT: " << e.what() << endl; // Handle write error
        return 1;
    }

    cout << "Finished writing to output3.dat." << endl; // Indicate completion
    return 0;
}

