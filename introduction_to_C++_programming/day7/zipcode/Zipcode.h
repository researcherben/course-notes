//
//  Zipcode.h
//
//  Alan B.  8/1/16
//
//  This class represents a zipcode in the United States

#ifndef ZIPCODE_H
#define ZIPCODE_H

#include <string>

using std::string;

class Zipcode {

private:
    string zcode;
    string city;
    string state;
    double latitude;
    double longitude;

public:
    Zipcode();                      // No-arg constructor
    Zipcode(const Zipcode & orig);  // Copy constructor
    
    ~Zipcode();                     // Destructor
    
    // the trailing "const" ensures the object is not changed by the function
    double calcDistance(const Zipcode & other) const;
    int indexOfClosestZipcode (const Zipcode * array, int size) const;

    string getZcode()     { return zcode;     }
    string getCity()      { return city;      }
    string getState()     { return state;     }
    double getLatitude()  { return latitude;  }
    double getLongitude() { return longitude; }
    
    void setZcode (string z)         { zcode = z;         }
    void setCity  (string c)         { city = c;          }
    void setState (string s)         { state = s;         }
    void setLatitude (double lat)    { latitude = lat;    }
    void setLongitude (double longt) { longitude = longt; }    
};

#endif
