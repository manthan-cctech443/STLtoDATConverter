#pragma once

// Class representing a point in 3D space
class Point {
private:
    int x, y, z; // Coordinates of the point in 3D space

public:
    // Constructor
    Point(int x, int y, int z);  
    
    // Destructor
    ~Point();

    // Getter for the X coordinate
    int getX() const;
    
    // Getter for the Y coordinate
    int getY() const;
    
    // Getter for the Z coordinate
    int getZ() const;
};
