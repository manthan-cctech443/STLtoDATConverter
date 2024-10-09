#include <iostream>
#include "Reader.h"
#include "Writer.h"
#include "Triangulation.h"
using namespace std;

int main() {
    Triangulation triangulation;
    Reader reader;
    vector<double> uniquePoints; 

    try {
        reader.readSTL("input1.stl", triangulation, uniquePoints);
    }
    catch (const runtime_error& e) {
        cerr << "Error reading STL: " << e.what() << endl;
        return 1;
    }

    Writer writer;
    try {
        writer.writeDAT("output1.dat", triangulation.getTriangles(), uniquePoints);
    }
    catch (const runtime_error& e) {
        cerr << "Error writing DAT: " << e.what() << endl;
        return 1;
    }

    cout << "Finished writing to output1.dat." << endl;
    return 0;
}

