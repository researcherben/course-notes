// $ g++ appendix_page_b14_exercise2_macro.cpp -lm

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

//#define CUBE(x)  ((x)*(x)*(x))
#define CUBE(x)  (pow((x),3))

int main(){
    int x=3;
    int z;
    z=CUBE(x);
    cout << z << " " << x << endl; // expecting 27 3
    z=CUBE(x + 1);
    cout << z << " " << x << endl; // expecting 64 3
    z=CUBE(x++);
    cout << z << " " << x << endl; // expecting 27 4
}
