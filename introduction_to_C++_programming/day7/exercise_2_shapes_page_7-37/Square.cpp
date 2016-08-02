// g++ -c Square.cpp

#include "Square.h"
#include "MyString.h"

Square::Square(double l, MyString s) : Shape(s){
    side=l;
}

double Square::perimeter(){
    return 4*side;
}

Square::~Square(){}

double Square::area(){
    return side*side;
}
