#ifndef POINT_H
#define POINT_H
struct point {
    int x_coord;         //  x-coordinate
    int y_coord;         //  y-coordinate
};

// prototype for functions
point init(int x, int y);
void print(point p);
double distance(point p1, point p2);
point move(point p, int x_offset, int y_offset);

#endif // POINT_H
