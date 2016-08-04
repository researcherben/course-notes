// g++ read_cities.cpp Zipcode.o

#include <iostream>
#include <fstream>
#include <cstdlib> // exit
#include <string>  // c++ string class
#include <cstring> // equivalent of C string.h; used by strcpy

#include "Zipcode.h"

#define MAX_CITIES_COUNT 100

using std::cout;
using std::endl;
using std::cerr;
using std::ifstream;
using std::string;

void break_line_into_fields(const string line, string & zcode, double & latitude,
                            double & longitude, string & postofficebox,
                            string & cityname, string & state_code);

int main(){
    ifstream in("bigcities.csv");
    if (! in){
        cerr << "bigcities.csv does not exist" << endl;
        exit(1);
    }

    Zipcode cities_ary[MAX_CITIES_COUNT];

    string line;
    int line_number=0;
    int cumulative_distance=0;
    getline(in, line); // http://www.cplusplus.com/reference/string/string/getline/
    while (! in.eof()) { // eof is available for stream objects
        //cout << line << endl;

        // 10001, +40.75042,-073.99632, ,NEW YORK,36

        string zcode;
        double latitude;
        double longitude;
        string postofficebox;
        string city;
        string state_code;

        break_line_into_fields(line, zcode, latitude,
                            longitude, postofficebox,
                            city, state_code);

        Zipcode this_city;
        this_city.setZcode(zcode);
        this_city.setCity(city);
        this_city.setState(state_code);
        this_city.setLatitude(latitude);
        this_city.setLongitude(longitude);
        
        cities_ary[line_number]=this_city;
        if (line_number>0){
            cumulative_distance += this_city.calcDistanceTo(cities_ary[line_number-1]);
            cout << this_city.getCity() << " | " << cumulative_distance << endl;
        } else { // first city
            cout << this_city.getCity() << " | 0 " << endl;
        }

        line_number++;
        getline(in, line);   
    }
    in.close();     // Close input file
}

void break_line_into_fields(const string line, string & zcode, double & latitude,
                            double & longitude, string & postofficebox,
                            string & cityname, string & state_code){

    char array[line.length() + 1]; // plus one for the null terminator
    char *ptr;
    
    // convert from "string" to an array of characters
    strcpy(array, line.data()); 
    
    // http://en.cppreference.com/w/cpp/string/byte/strtok
    ptr = strtok (array, ",");      // 1st field: zipcode
    zcode = atoi(ptr); // overloaded assignment operator in string class enables assignment of character pointer to string object
    
    ptr = strtok (NULL, ",");       // 2nd field
    latitude = atof(ptr);
    
    ptr = strtok (NULL, ",");       // 3rd field
    longitude = atof(ptr);
    
    ptr = strtok (NULL, ",");       // 4th field
    postofficebox = ptr;

    ptr = strtok (NULL, ",");       // 5th field
    cityname = ptr;

    ptr = strtok (NULL, ",");       // 6th field
    state_code = atoi(ptr); // integer to character array
}
