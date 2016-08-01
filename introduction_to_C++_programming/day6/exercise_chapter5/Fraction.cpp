//
//	Starter code for Exercise 5-1
//
#include <iostream>

using namespace std;

#include "Fraction.h"

// non-member constructor
Fraction::Fraction(int n, int d)
{
	numer = n;
	denom = d;
}

// non-member function
void Fraction::recip()
{
	int temp;
	
	temp = numer;
	numer = denom;
	denom = temp;
}

// non-member function
void Fraction::print()
{
	cout << numer << "/" << denom << endl;
}

// non-member function override
Fraction operator*(const Fraction & p1, const Fraction & p2)
{
	Fraction temp;
	
	temp.numer = p1.numer * p2.numer;
	temp.denom = p1.denom * p2.denom;
	return temp;
}

// non-member function override
Fraction operator/(const Fraction & p1, const Fraction & p2)
{
	Fraction temp=p2; // copy 
	
	temp.recip();
	return temp * p1;
}

// non-member function override
Fraction operator+(const Fraction & p1, const Fraction & p2)
{
	Fraction temp;
	
	temp.numer = p1.numer*p2.denom + p2.numer*p1.denom;
	temp.denom = p1.denom * p2.denom;
	return temp;
}

// non-member function override
Fraction operator-(const Fraction & p1, const Fraction & p2)
{
	Fraction temp;
	
	temp.numer = p1.numer*p2.denom - p2.numer*p1.denom;
	temp.denom = p1.denom * p2.denom;
	return temp;
}
