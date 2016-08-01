//
//  ZipcodeTest.cpp
//
//  Alan B.  8/1/16
//
//  This program tests the Zipcode class and the distance
//  function

#include <iostream>

#include "Zipcode.h"
#include "distance.cpp"

using std::cout;
using std::endl;

int main()
{
    Zipcode a, b;
    
    //  10001, +40.75042,-073.99632, ,NEW YORK,36   
    a.setZcode("10001");
    a.setCity("New York");
    a.setState("NY");
    a.setLatitude(40.75042);
    a.setLongitude(-073.99632);
    
    //  90001, +33.97395,-118.24840, ,LOS ANGELES,06
    b.setZcode("90001");
    b.setCity("Los Angeles");
    b.setState("CA");
    b.setLatitude(33.97395);
    b.setLongitude(-118.24840);
    
    Zipcode c = a; // or Zipcode c(a);
    
    double distance = a.calcDistance(b);
// old method:
/*    
    double distance = globeDistance 
        (a.getLatitude(), a.getLongitude(), 
         b.getLatitude(), b.getLongitude());
*/
       
    cout << "The distance between " << a.getCity() << " and "
         << b.getCity() << " is " << distance << " miles" << endl;
}
