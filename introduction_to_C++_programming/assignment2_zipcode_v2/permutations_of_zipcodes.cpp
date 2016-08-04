#include <fstream>
#include <cstdlib> // exit
#include <string>  // c++ string class
#include <cstring> // equivalent of C string.h; used by strcpy
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
#include <iomanip> // setw

#include "Zipcode.h"

#define MAX_CITIES_COUNT 100
#define NUM_ELEMENTS 6
#define MAX_CITY_NAME_LENGTH 20

using std::cout;
using std::endl;
using std::cerr;
using std::ifstream;
using std::string;
using std::setw;

void break_line_into_fields(const string line, string & zcode, double & latitude,
                            double & longitude, string & postofficebox,
                            string & cityname, string & state_code);

int read_in_cities_ary(Zipcode * cities_ary);

int distance_for_list_of_cities(const Zipcode * cities_ary,
                                const int number_of_cities);

void print_city_list(const Zipcode * cities_ary,
                     const int number_of_cities);

int main () {

    Zipcode cities_ary[MAX_CITIES_COUNT];
    int number_of_cities=0;
    number_of_cities = read_in_cities_ary(cities_ary);

    cout << "route as read from file:" << endl;
    int cumulative_dist=0;
    cumulative_dist = distance_for_list_of_cities(cities_ary,number_of_cities);
    print_city_list(cities_ary,number_of_cities);
    
    int lowest_cumulative_dist=cumulative_dist;
    Zipcode optimal_cities_ary[number_of_cities];
    for (int indx=0; indx<number_of_cities; indx++){
        optimal_cities_ary[indx] = cities_ary[indx];
    }
    
    //cout << "search: " << endl;
    int myints[number_of_cities];
    for (int indx=0; indx<number_of_cities; indx++){
        myints[indx]=indx;
    }

    do{
        Zipcode cities_ary_temp[number_of_cities];
        // re-arrange
        for (int indx=0; indx<number_of_cities; indx++){
            cities_ary_temp[indx] = cities_ary[myints[indx]];
        }
        //cout << "lowest cumulative distance so far: " << lowest_cumulative_dist << endl;
        cumulative_dist = distance_for_list_of_cities(cities_ary_temp,number_of_cities);
        
        
        if (cumulative_dist < lowest_cumulative_dist) {
            lowest_cumulative_dist=cumulative_dist;
            for (int indx=0; indx<number_of_cities; indx++){
                optimal_cities_ary[indx] = cities_ary_temp[indx];
            }
        }
    }while(std::next_permutation(myints,myints+number_of_cities));

    cout << "best arrangement: " << endl;
    print_city_list(optimal_cities_ary,number_of_cities);

    return 0;
}

void print_city_list(const Zipcode * cities_ary,
                     const int number_of_cities){
    int cumulative_distance=0;
    cout << setw(MAX_CITY_NAME_LENGTH) << "city name" << " | cumulative distance" << endl;
    cout << "=======================================" << endl;

    for (int indx=0; indx<number_of_cities; indx++){
        if (indx>0){
            cumulative_distance += cities_ary[indx].calcDistanceTo(cities_ary[indx-1]);
            cout << setw(MAX_CITY_NAME_LENGTH) << cities_ary[indx].getCity() << " | " << cumulative_distance << endl;
        } else { // first city
            cout << setw(MAX_CITY_NAME_LENGTH) << cities_ary[indx].getCity() << " | 0 " << endl;
        }
    }
}


int distance_for_list_of_cities(const Zipcode * cities_ary,
                                const int number_of_cities){
    int cumulative_distance=0;

    for (int indx=1; indx<number_of_cities; indx++){ // start at 1 since we skip first city (indx=0)
            cumulative_distance += cities_ary[indx].calcDistanceTo(cities_ary[indx-1]);
    }
    return cumulative_distance;
}


int read_in_cities_ary(Zipcode * cities_ary){
    ifstream in("bigcities.csv");
    if (! in){
        cerr << "bigcities.csv does not exist" << endl;
        exit(1);
    }

    string line;
    int line_number=0;
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

        line_number++;
        getline(in, line);   
    }
    in.close();     // Close input file
    return line_number;
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
