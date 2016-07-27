#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    
    int target_value=15;
    cout << "Enter a number to fizzbuzz: ";
    cin >> target_value;
    for (int indx=1; indx<=target_value; indx++){
        if (indx%3 == 0){
            cout << "fizz";
        }
        if(indx%5 == 0){
            cout << "buzz";
        }
        if(indx%5 != 0 && indx%3 != 0){
            cout << indx;
        }
        cout << endl;
    }
}
