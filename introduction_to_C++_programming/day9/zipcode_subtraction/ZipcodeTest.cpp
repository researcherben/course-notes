//
//  ZipcodeTest.cpp
//
//  Alan B.  8/1/16
//           8/2/16  v2   Added indexOfClosestZipcode function
//
//  This program tests the Zipcode class
//
//  (This is a second version to test the new function.  The
//   original test program has been renamed to ZipcodeTest-orig.cpp)
//  

#include <iostream>

#include "Zipcode.h"


using std::cout;
using std::endl;

const int SIZE = 4;

int main()
{
    Zipcode myZips[SIZE];
        
    //  10001, +40.75042,-073.99632, ,NEW YORK,36   
    myZips[0].setZcode("10001");
    myZips[0].setCity("New York");
    myZips[0].setState("NY");
    myZips[0].setLatitude(40.75042);
    myZips[0].setLongitude(-73.99632);
    
    //  90001, +33.97395,-118.24840, ,LOS ANGELES,06
    myZips[1].setZcode("90001");
    myZips[1].setCity("Los Angeles");
    myZips[1].setState("CA");
    myZips[1].setLatitude(33.97395);
    myZips[1].setLongitude(-118.24840);
    
    //  92101, +32.72110,-117.17436, ,SAN DIEGO,06
    
    myZips[2].setZcode("92101");
    myZips[2].setCity("San Diego");
    myZips[2].setState("CA");
    myZips[2].setLatitude(32.72110);
    myZips[2].setLongitude(-117.17436);    
      
    //  75201, +32.78117,-096.79032, ,DALLAS,48  
    
    myZips[3].setZcode("75201");
    myZips[3].setCity("Dallas");
    myZips[3].setState("TX");
    myZips[3].setLatitude(32.78117);
    myZips[3].setLongitude(-96.79032);      
    
      
    Zipcode myLocation;
    
    //  38101,+35.050667,-089.84778,P,MEMPHIS,47    
    
    myLocation.setZcode("38101");
    myLocation.setCity("Memphis");
    myLocation.setState("TN");
    myLocation.setLatitude(35.050667);
    myLocation.setLongitude(-89.84778);      
    
    int index = myLocation.indexOfClosestZipcode (myZips, SIZE);
    
    cout << "Among:  ";
    for (int i = 0; i < SIZE; ++i) {
        cout << myZips[i].getCity() << " ";
    }
    cout << endl;
    cout << "The closest city to " << myLocation.getCity() << " is "
         << myZips[index].getCity() << endl;
         
    cout << myZips[0] - myZips[1] << endl;
}   
