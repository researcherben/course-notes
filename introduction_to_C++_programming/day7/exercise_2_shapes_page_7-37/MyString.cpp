//
//	From Solution 5-5
//

// g++ -c MyString.cpp

#include <iostream>
#include <string.h>			// strcpy, strlen
#include <stdlib.h>			// exit

//using namespace std;
using std::cout;

#include "MyString.h"

MyString::MyString(const char *str) // constructor for initialization
{
	data = new char[(len = strlen(str)) + 1];
	if(data)
		strcpy(data,str);
	else
	{
		cout << "No memory\n";	
		exit(1);
	}
	
	howmany++;
	if ( len > longest)
		longest = len;
}

MyString::MyString(const MyString & cmsr) // copy constructor
{
	howmany++;
	len = cmsr.len;
	data = new char[len + 1];
	strcpy(data, cmsr.data);
}

MyString::~MyString() // destructor
{
	delete [] data;
	
	howmany--;
}

MyString & MyString::operator=(const MyString & cmsr)
{
	if ( this != &cmsr )
	{
		delete [] data;
		len = cmsr.len;
		data = new char[len + 1];
		strcpy(data, cmsr.data);
	}
	return *this;
}

int MyString::getLength()
{
	return len;
}

const char *MyString::getString()
{ 
	return data;
}

void MyString::reverse() 
{
	int end = len - 1;
	char temp;
	for (int i = 0; i < end; i++)
	{
		temp = data[i];
		data[i] = data[end];
		data[end--] = temp;
	}
}

bool MyString::ispal() 
{
	MyString temp(data);
	temp.reverse();
	return(strcmp(data,temp.data) == 0);
}

int MyString::howmany = 0;
int MyString::longest = 0;

int MyString::getLongest()
{
	return longest;
}

int MyString::getCount()
{
	return howmany;
}


