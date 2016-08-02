//
// Starter code for Exercise 7-1
//

#include <iostream>

using namespace std;

#include "Point.h"
#include "Point3D.h"

int main()
{
	Point  	p1(0,1);
	Point3D	p2(2,3,4);
	
	cout << "direct access: " << endl;
	cout << p1.get_x_coord() << "," << p1.get_y_coord() << endl;
	cout << p2.get_x_coord() << "," << p2.get_y_coord() << "," << p2.get_z_coord() << endl;
	
	cout << "using functions: " << endl;
	p1.print();
	cout << endl;
	
	p2.print();
	cout << endl;
	
	return 0;
}


