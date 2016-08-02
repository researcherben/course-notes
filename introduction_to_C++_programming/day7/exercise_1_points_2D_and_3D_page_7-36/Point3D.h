#ifndef POINT3D_H
#define POINT3D_H

#include "Point.h"
using std::cout;

class Point3D : public Point{
private:
    int z_coord;
public:
    Point3D(int x_coord, int y_coord, int z_coord) : Point(x_coord, y_coord){  // constructor
        set_z_coord(z_coord);
    }

//    int get_x_coord(){return x_coord; }
//    int get_y_coord(){return y_coord; }
    int get_z_coord(){return z_coord; }

    void set_z_coord(int zc){ z_coord=zc; }

//    void print(const int x_coord, const int y_coord, const int z_coord){
    void print(){
        Point::print();
        cout << ", " << z_coord;
    }

};

#endif
