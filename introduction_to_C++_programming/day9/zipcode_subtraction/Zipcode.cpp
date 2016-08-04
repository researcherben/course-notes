//
//  Zipcode.cpp
//
//  Alan B.  8/1/16
//           8/2/16  v2   Added indexOfClosestZipcode function
//
//  These are the member functions for the Zipcode class

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

double Zipcode::calcDistanceTo(const Zipcode & other) const
{
    return globeDistance(this->latitude, this->longitude, 
        other.latitude, other.longitude);
}

int Zipcode::indexOfClosestZipcode (const Zipcode * array, int size) const
{
    double smallestDistance = DBL_MAX;  // largest doule value
    double distance;
    int index = 0;
    
    for(int i = 0; i < size; ++i) {
        distance = calcDistanceTo(array[i]);
        if (distance < smallestDistance) {
            smallestDistance = distance;
            index = i;
        }
    }  
    
    return index;  
}

// arguments against:
// 1) zip1 - zip2 - zip3 is ill defined
// 2) subtraction is not commutative, distance between zipcodes should be
double operator-(const Zipcode & a, const Zipcode & b){
    return a.calcDistanceTo(b);
    
    // return globeDistance(a.latitude, a.longitude, b.latitude, b.longitude);
}
