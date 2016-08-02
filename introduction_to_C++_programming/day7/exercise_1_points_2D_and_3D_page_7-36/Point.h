#ifndef POINT_H
#define POINT_H

using std::cout;

class Point{
protected:
    int x_coord;
    int y_coord;
public:
    Point(int x_coord, int y_coord){ // constructor
        set_x_coord(x_coord);
        set_y_coord(y_coord);
    }

    int get_x_coord(){return x_coord; }
    int get_y_coord(){return y_coord; }

    void set_x_coord(int xc){ x_coord=xc; }
    void set_y_coord(int yc){ y_coord=yc; }

/*    
    void print(const int x_coord, const int y_coord){
        cout << x_coord << ", " << y_coord;
    }
*/
    void print(){
        cout << x_coord << ", " << y_coord;
    }
};

#endif
