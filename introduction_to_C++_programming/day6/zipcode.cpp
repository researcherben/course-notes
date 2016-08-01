/*
Ben P
20160801

Your class should have a no-argument constructor, accessors, and mutators. 
write a destructor and a copy constructor with just a print statement inside.
*/

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Zipcode{
private:
    string zcode;
    string city;
    string state;
    double latitude;
    double longitude;
public:

    // constructors: see 4-22
    Zipcode(); // no-argument 
    Zipcode(string zcode, string city, string state, double latitude, double longitude); 
    
    // accessors
    string get_zipcode(){  return zcode; }
    string get_city(){     return city; }
    string get_state(){    return state; }
    double get_latitude(){ return latitude; }
    double get_longitude(){return longitude; }
    
    // mutators
    void set_zipcode(string z){ zcode=z; }
    void set_city(string c){ city=c; }
    void set_state(string s){ state=s; }
    void set_latitude(double lat){ latitude=lat; }
    void set_longitude(double lon){longitude=lon; }
    
    Zipcode::Zipcode(const Zipcode & orig){  // Copy constructor
        cout << "Copy constructor for Zipcode called" << endl;
    }
    
    // destructors: see 4-28
    ~Zipcode(){
        std::cout << "Zipcode destructor called" << std::endl;
    }

};

int main(){

}
