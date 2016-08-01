/*
	Starter code for Exercise 5-2
	
	g++ 5-2.cpp IntArray.cpp
*/
#include "IntArray.h"

int main()
{
	IntArray values(10);
	
	values.print();
	
	IntArray items = values; // copy
	items = values; // assignment
	
	return 0;
}


