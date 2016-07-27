#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int place_holder=0;   
    int target_value=15;
    for (int indx=1; indx<=target_value; indx++){
        if (indx%3 == 0 && indx%5 != 0){
            place_holder=1;
        }else if(indx%5 == 0 && indx%3 != 0){
            place_holder=2;
        }else if(indx%5 == 0 && indx%3 == 0){
            place_holder=3;
        }else{
            place_holder=4;
        }
    }
}
