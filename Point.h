#pragma once

class Point {
private:
    int x, y, z; 

public:
    Point(int x, int y, int z);  
    ~Point();

    int getX() const;
    int getY() const;
    int getZ() const;
}; 
