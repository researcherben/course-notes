/*
    author: Ben Payne
    date: 20160728
    name of file: beer.cpp
    [adhere to 80 column limit]
    [compile without warnings]
    [functionally correct]
    Write a C++ program that prompts the user for the starting number of 
    bottles, and then passes the number of bottles to a function that prints 
    the song for that many bottles.  Your should reject any value less than 
    zero for the number of bottles.  Your program should use C++ style I/O.
    [exception handling]  
    Number of bottles should be non-negative integer

    CAVEAT: user input that starts with a number is truncated at the first 
    non-digit character

*/

#include <iostream>
#include <climits>
//#include <typeinfo>

using std::cout;
using std::cin;
using std::endl;
using std::flush;

int get_upper_limit(void);
bool validate_input(int);

int main(){

    int number_of_beers=0;
    bool found_valid_input=false; 
    do{ // loop until valid input is provided by user
        number_of_beers = get_upper_limit();
        found_valid_input=validate_input(number_of_beers);
    }while(!found_valid_input);
    
    for (int indx=number_of_beers; indx>0; indx--){
        if (indx>1){
            cout << indx << " bottles of beer on the wall," << endl;
            cout << indx << " bottles of beer!" << endl;
        }else{
            cout << indx << " bottle of beer on the wall," << endl;
            cout << indx << " bottle of beer!" << endl;
        }
        cout << "Take one down and pass it around," << endl;
        if (indx==2){
            cout << indx-1 << " bottle of beer on the wall!" << endl;
        }else if (indx<=1){
            cout << "No more bottles of beer on the wall!" << endl;
        }else{
            cout << indx-1 << " bottles of beer on the wall!" << endl;
        }
        cout << endl;
    }
}

// get input from user, return an integer
// validation approach from page 8-14
// inputs that start with a digit are truncated at the first non-digit
int get_upper_limit(){
    int upper_limit;
    cout << "Enter number of beers [integer in range 1 to 99 inclusive]: " 
         << flush;
    while(1){
        cin >> upper_limit;
        if (cin.good()){
            cin.ignore(INT_MAX,'\n');
            break;
        }
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        cout << "invalid input. Try again: " << flush;
    }
    
//    cout << "you provided " << upper_limit << endl;    
    return upper_limit;
}

// validate that input integer is between 1 and 99
bool validate_input(int val){
    //cout << "you provided " << val << endl;   
    if ((val<1)||(val>99)){
      cout << "Integer not in valid range. Should be between 1 and 99 inclusive"
           << endl;
      return false;
    }else{
        return true;
    }
}

