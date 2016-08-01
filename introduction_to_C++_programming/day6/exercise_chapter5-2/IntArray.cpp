//
//	Starter code for Exercise 5-2
//
#include <iostream>

using namespace std;

#include "IntArray.h"

// create
IntArray::IntArray(int size)
{
	howmany = size;
	data = new int[howmany];
	int i;
	for (i = 0; i < howmany; i++)
		data[i] = 0;
}

// copy
IntArray::IntArray(const IntArray & car) // pass by reference; don't alter input
{
    IntArray temp;
    
    /// *
	howmany = car.howmany;
	data = new int[howmany];
	int i;
	for (i = 0; i < howmany; i++)
		data[i] = car.data[i];
	//*/
}

// destructor
IntArray::~IntArray()
{
	delete [] data;
}

// operator over-ride of = alters assignment behavior
IntArray & IntArray::operator=(const IntArray & car)
{
	if ( this != &car )
	{
		delete [] data;
		howmany = car.howmany;
		data = new int[howmany];
		int i;
		for (i = 0; i < howmany; i++)
			data[i] = car.data[i];
	}
	return *this;
}

// non-member function
void IntArray::print()
{
	int i;
	
	for (i = 0; i< howmany; i++)
		cout << data[i] << " ";
		
	cout << endl;
}

