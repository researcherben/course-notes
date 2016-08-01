/*
	Starter code for Exercise 5-1

    compiling:	
	g++ 5-1.cpp Fraction.cpp
*/
#include <iostream>

using namespace std;

#include "Fraction.h"

int main()
{
	Fraction a(2,3), b(5,6), c;
	
    cout << "a: ";
	a.print();
	cout << "b: ";
	b.print();
	
	cout << endl << "MULT a*b" << endl;
	c = a * b; // uses function over-ride
	c.print();
	
	cout << endl << "DIVIDE a/b" << endl;
	c = a / b; // uses function over-ride
	c.print();

	cout << endl << "ADD a+b" << endl;
	c = a + b; // uses function over-ride
	c.print();

	cout << endl << "SUBTRACT a-b" << endl;
	c = a - b; // uses function over-ride
	c.print();
	
	return 0;
}

