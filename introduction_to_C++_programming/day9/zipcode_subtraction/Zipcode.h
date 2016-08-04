//
//  Zipcode.h
//
//  Alan B.  8/1/16
//           8/2/16  v2   Added indexOfClosestZipcode function
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
    
    double calcDistanceTo (const Zipcode & other) const;
    int indexOfClosestZipcode (const Zipcode * array, int size) const;

    string getZcode()     const { return zcode;     }
    string getCity()      const { return city;      }
    string getState()     const { return state;     }
    double getLatitude()  const { return latitude;  }
    double getLongitude() const { return longitude; }
    
    void setZcode (string z)         { zcode = z;         }
    void setCity  (string c)         { city = c;          }
    void setState (string s)         { state = s;         }
    void setLatitude (double lat)    { latitude = lat;    }
    void setLongitude (double longt) { longitude = longt; }   
    
    friend double operator-(const Zipcode & a, const Zipcode & b);
};

#endif

