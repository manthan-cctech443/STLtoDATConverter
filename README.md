# STLtoDATConverter
STL to DAT Converter
Overview
The STL to DAT Converter is a C++ application that reads 3D model data from STL files and converts it into a DAT format. This converter allows users to manipulate and analyze 3D models represented in the STL file format by extracting the vertices of the triangles and storing them in a more accessible format.

Features
Read STL Files: Efficiently parses STL files to extract vertex information.
Write DAT Files: Outputs the extracted data into DAT files.
Unique Point Management: Handles duplicate vertex data by storing only unique points.
Triangle Representation: Represents each triangle in the model using its vertex points.
Requirements
C++11 or later
Standard C++ Library
Getting Started
Prerequisites
Ensure you have a C++ compiler installed (e.g., GCC, Clang, or MSVC).

The program will read from an input STL file (e.g., input.stl) and generate an output DAT file (e.g., output.dat).

Example
To convert an STL file named input.stl into output.dat, place the input file in the same directory as the executable and run the program.

File Structure
main.cpp: Contains the main function and program logic.

Reader.h/.cpp: Handles reading STL files and extracting vertex data.

Writer.h/.cpp: Responsible for writing the converted data to DAT files.

Triangle.h/.cpp: Defines the Triangle class for storing triangle data.

Triangulation.h/.cpp: Manages a collection of triangles.

Point.h/.cpp: Defines the Point class for representing 3D points.