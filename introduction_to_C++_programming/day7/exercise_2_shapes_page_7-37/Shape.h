//
//  Starter for Exercise 7-2
//

#ifndef SHAPE_H
#define SHAPE_H

#include "MyString.h"

class Shape{
protected:
	MyString shapename;
	
public:
	Shape(MyString s){ // constructor; non-abstract (regular) function prototype
	    shapename=s;
	}
	virtual ~Shape(){} // destructor
	
	virtual double perimeter() = 0; // these are abstract functions
	virtual double area() = 0;
	
	const char *getName(){ return shapename.getString(); }
};

#endif

