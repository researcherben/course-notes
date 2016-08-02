// g++ -c Circle.cpp

#include "Circle.h"
#include "MyString.h"

#define PI 3.14

Circle::Circle(double r, MyString s):Shape(s){
    radius=r;
}

Circle::~Circle(){}

double Circle::perimeter(){
    return 2*PI*radius;
}

double Circle::area(){
    return PI*radius*radius;
}
