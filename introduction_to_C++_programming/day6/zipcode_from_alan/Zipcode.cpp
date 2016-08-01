//
//  Zipcode.cpp
//
//  Alan B.  8/1/16
//
//  These are the member functions for the Zipcode class

#include <iostream>

#include "Zipcode.h"

using std::cout;
using std::endl;

Zipcode::Zipcode()          // No-arg constructor
{
    zcode     = "unknown";
    city      = "unknown";
    state     = "unknown";
    latitude  = 0.0;
    longitude = 0.0;
    
    cout << "No-arg constructor for Zipcode called" << endl;
}

Zipcode::Zipcode(const Zipcode & orig){  // Copy constructor
    cout << "Copy constructor for Zipcode called" << endl;
}

  
Zipcode::~Zipcode(){                    // Destructor
    cout << "Destructor for Zipcode called" << endl;
}

double Zipcode::calcDistance(const Zipcode & other){
    return globeDistance(this->latitude, this->longitude, other.latitude, other.longitude); 
    // first two argument use host parameters
    // because this is a member function, it has access to the private data of the class
}


