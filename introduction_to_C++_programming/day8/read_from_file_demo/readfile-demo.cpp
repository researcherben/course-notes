//
//  readfile-demo.cpp
//
//  Alan B.  8/2/16
//
//  This program demonstrates reading comma-separated data
//  from a file and loading into an object.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string> // c++ string class
#include <cstring> // equivalent of C string.h; used by strcpy

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::ifstream;

class Person {
private:
    string firstName;
    string lastName;
    int age;
    double weight;

public:    
    void setFirstName(string f) { firstName = f; }
    void setLastName(string l)  { lastName = l;  }
    void setAge(int a)          { age = a;       }
    void setWeight(double w)    { weight = w;    }
    
    void print() {
        cout << "Name: " << lastName << ", " << firstName
             << "  Age: " << age << "  Weight: " << weight
             << endl;
    }
};

void splitRecord(const string & line, string & firstName, 
    string & lastName, int & age, double & weight);
    

int main() 
{
    ifstream in("data.csv");
    
    if(! in) { // overloading "!" operator
        cerr << "Can't open data.csv" << endl;
        exit(1);
    }
    
    string line;
    string firstName, lastName;
    int age;
    double weight;
    Person aPerson;
    
    getline(in, line); // http://www.cplusplus.com/reference/string/string/getline/
    while (! in.eof()) { // eof is available for stream objects
        splitRecord(line, firstName, lastName, age, weight); // everything except first argument 
                                                             // is passed by reference, so it is altered in place
        
        // Now I have all the data to initialize a Person
        // Will print it for demonstration
        
        aPerson.setFirstName(firstName);
        aPerson.setLastName(lastName);
        aPerson.setAge(age);
        aPerson.setWeight(weight);
        
        aPerson.print();
    
        getline(in, line);   
    }
    
    in.close();     // Close input file
}

//  This function splits the record in "line" on commas,
//  and extracts the data and place into "out" parameters
//  To keep things simple, we will assume the record
//  is valid, i.e., right number and type of fields

void splitRecord(const string & line, string & firstName, 
    string & lastName, int & age, double & weight) 
{
    char array[line.length() + 1]; // plus one for the null terminator
    char *ptr;
    
    // convert from "string" to an array of characters
    strcpy(array, line.data()); 
    
    // http://en.cppreference.com/w/cpp/string/byte/strtok
    ptr = strtok (array, ",");      // 1st field
    firstName = ptr; // overloaded assignment operator in string class enables assignment of character pointer to string object
    
    ptr = strtok (NULL, ",");       // 2nd field
    lastName = ptr;
    
    ptr = strtok (NULL, ",");       // 3rd field
    age = atoi(ptr); // integer to character array
    
    ptr = strtok (NULL, ",");       // 4th field
    weight = atof(ptr); // double to character array
}
    

