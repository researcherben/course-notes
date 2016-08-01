//
//  Zipcode.h
//
//  Alan B.  8/1/16
//
//  This class represents a zipcode in the United States

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

    double calcDistance(const Zipcode & other); // member function

    // accessor
    string getZcode()     { return zcode;     }
    string getCity()      { return city;      }
    string getState()     { return state;     }
    double getLatitude()  { return latitude;  }
    double getLongitude() { return longitude; }
    
    // mutator
    void setZcode (string z)         { zcode = z;         }
    void setCity  (string c)         { city = c;          }
    void setState (string s)         { state = s;         }
    void setLatitude (double lat)    { latitude = lat;    }
    void setLongitude (double longt) { longitude = longt; }    
};

