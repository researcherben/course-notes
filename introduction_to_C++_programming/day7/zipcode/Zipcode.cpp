//
//  Zipcode.cpp
//
//  Alan B.  8/1/16
//
//  These are the member functions for the Zipcode class
//
// g++ -c Zipcode.cpp

#include <iostream>
#include <cfloat>

#include "Zipcode.h"
#include "distance.cpp"

using std::cout;
using std::endl;

Zipcode::Zipcode()          // No-arg constructor
{
    zcode     = "unknown";
    city      = "unknown";
    state     = "unknown";
    latitude  = 0.0;
    longitude = 0.0;
    // to include, compile with -DDEBUG
    #ifdef DEBUG
    cout << "No-arg constructor for Zipcode called" << endl;
    #endif
}


Zipcode::Zipcode(const Zipcode & orig)  // Copy constructor
{
#ifdef DEBUG
    cout << "Copy constructor for Zipcode called" << endl;
    #endif
}

   
Zipcode::~Zipcode()                    // Destructor
{
#ifdef DEBUG
    cout << "Destructor for Zipcode called" << endl;
    #endif
}

double Zipcode::calcDistance(const Zipcode & other) const
{
    return globeDistance(this->latitude, this->longitude, other.latitude, other.longitude);
}

int Zipcode::indexOfClosestZipcode (const Zipcode * array, int size) const{
    double smallestDistance = DBL_MAX;
    double distance;
    int index=0;
    for (int i=0; i<size; ++i){
        distance=calcDistance(array[i]);
        if (distance<smallestDistance){
            smallestDistance=distance;
            index=i;
        }
    }
    return index;
}
