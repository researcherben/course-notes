//
//  Starter for Exercise 7-2
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include "MyString.h"

class Circle : public Shape
{	
protected:
	double radius;
	
public:
	Circle(double radius, MyString s); // constructor
	~Circle();                         // destructor
	
	virtual double perimeter();
	virtual double area();
};

#endif

