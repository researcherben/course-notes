// $ g++ appendix_page25_exercise2_addition.cpp
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
//using namespace std;
int main(){
    int upper_limit=0, lower_limit=0, sum_of_values=0;
    cout << "Enter the first number (lower): ";
    cin >> lower_limit;
    cout << "you provided " << lower_limit << endl;

    cout << "Enter the second number (upper): ";
    cin >> upper_limit;
    cout << "you provided " << upper_limit << endl;
    
    for (int indx=lower_limit; indx<=upper_limit; indx++){
        sum_of_values += indx;
    }
    
    cout << "result: " << sum_of_values << endl;
}
