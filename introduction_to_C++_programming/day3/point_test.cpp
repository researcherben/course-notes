#include <iostream>
#include <cmath>
#include "point.h"

using std::cout;
using std::endl;

int main(){
    point p1, p2;
    p1=init(0,0);
    p2=init(3,4);
    
    //point ary[10];
    
    cout << "p1 is ";
    print(p1);
    cout << endl;
    cout << "p2 is ";
    print(p2);
    cout << endl;
    
    cout << "distance between p1,p2 is " << distance(p1,p2) << endl;
        
    cout << "p1 after move: ";
    print(move(p2,4,5));
    cout << endl;
    
}

point init(int x, int y){
    point temp;
    temp.x_coord = x;
    temp.y_coord = y;
    return temp;
}

void print(point p){
    cout << "(" << p.x_coord << "," << p.y_coord << ")";
}

double distance(point p1, point p2){
    double x_dist=0;
    double y_dist=0;
    x_dist=p1.x_coord - p2.x_coord;
    y_dist=p1.y_coord - p2.y_coord;
    return sqrt(x_dist*x_dist + y_dist*y_dist);
}

point move(point p, int x_offset, int y_offset){
    point temp;
    temp.x_coord = p.x_coord+x_offset;
    temp.y_coord = p.y_coord+y_offset;
    
    return temp;
}
