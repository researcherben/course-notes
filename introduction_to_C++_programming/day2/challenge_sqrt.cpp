// $ g++ appendix_page25_exercise4_sum_of_squares.cpp
#include <iostream>
#include <cmath> 
// equivalent to <math.h> in C

using std::cout;
using std::endl;
using std::cin;
//using namespace std;

double sqrt_sum_of_squares(int side1, int side2);

int main(){
    int side1=5;
    int side2=4;
    double result;
    result=sqrt_sum_of_squares(side1, side2);
    cout << result << endl;
}

double sqrt_sum_of_squares(int side1, int side2){
    return sqrt((side1*side1)+(side2*side2));
}


