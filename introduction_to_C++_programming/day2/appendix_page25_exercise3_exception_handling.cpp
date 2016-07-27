// $ g++ appendix_page25_exercise3_exception_handling.cpp
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
//using namespace std;

int get_upper_limit(){
    int upper_limit=0;
    cout << "Enter the second number (upper): ";
    cin >> upper_limit;
    cout << "you provided " << upper_limit << endl;
    return upper_limit;
}

int main(){
    int upper_limit=0, lower_limit=0, sum_of_values=0;
    cout << "Enter the first number (lower): ";
    cin >> lower_limit;
    cout << "you provided " << lower_limit << endl;

    upper_limit = get_upper_limit();
    while (upper_limit<lower_limit){
        cout << "Error: first number should be lower than second number" << endl;
        cout << "Re";
        upper_limit = get_upper_limit();
    }

    cout << "passed!" << endl;
    for (int indx=lower_limit; indx<=upper_limit; indx++){
        sum_of_values += indx;
    }
    
    cout << "result: " << sum_of_values << endl;
}
