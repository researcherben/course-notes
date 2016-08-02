/*
Ben P

g++ -c MyString.cpp
g++ -c Circle.cpp
g++ -c Square.cpp
g++ MyStringTest.cpp Square.o MyString.o Circle.o

*/

#include <iostream>
#include "Circle.h"
#include "Square.h"
#include "MyString.h"

using std::cout;
using std::endl;

int main(){
    const int SIZE = 4;
    
    Shape * pointers[SIZE];
    
    Circle c1(5.0,"thecircle");
    Square s1(10.5,"mysquare");
    
    pointers[0]=&s1;
    pointers[1]=&c1;
}
