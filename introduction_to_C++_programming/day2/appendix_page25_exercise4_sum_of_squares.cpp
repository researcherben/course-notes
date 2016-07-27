// $ g++ appendix_page25_exercise4_sum_of_squares.cpp
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
//using namespace std;

int sum_of_squares(int side1, int side2);

int main(){
    int side1=3;
    int side2=4;
    int result;
    result=sum_of_squares(side1, side2);
    cout << result << endl;
}

int sum_of_squares(int side1, int side2){
    return (side1*side1)+(side2*side2);
}
