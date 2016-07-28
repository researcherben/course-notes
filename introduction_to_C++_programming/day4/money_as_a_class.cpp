/*
Write and test a function that takes two parameters: an array of money structures and the size of the array.  The function returns a money structure that represents the total value of all the money structures in the array.
*/

#include <iostream>
#include <iomanip> // parameterized manipulators
using std::cout; // standard out
using std::endl; // end of line
using std::setw; // width for printing
using std::setfill; // pad with character

#define SIZE 3

// motivation for separating dollars and cents: to avoid float arithmetic
class Money {
private: // create a section of the class; "private" hides the data. Default is for class content to be private
    // data members of class
    int dollars;
    int cents;
public:
    // function members of class
    void print(void); // (void) is not the same as () for prototypes which take no arguments
    // accessor functions
    int getDollars(void);
    int getCents(void);
    // mutator functions change data
    void setDollars(int d);
    void setCents(int c);
};

// function prototype
Money computeTotal (Money array[], int size);

void Money::print(){ // this function is part of the "Money" class. "::" is the scope resolution operator
    cout << "amount: $" << dollars << "." << setw(2) << setfill('0') << cents << endl;
}

int Money::getDollars(){ return dollars; }
int Money::getCents(){ return cents; }

// set functions enable validation of the data
void Money::setDollars(int d){ dollars=d; }
void Money::setCents(int c){ cents=c; }

int main(){
    Money myMoney[SIZE];
    Money myTotal;

    myMoney[0].setDollars(2);
    myMoney[0].setCents(50);

    myMoney[1].setDollars(3);
    myMoney[1].setCents(50);

    myMoney[2].setDollars(5);
    myMoney[2].setCents(25);

    myTotal = computeTotal(myMoney, SIZE); // myTotal should have dollars=11, cents=25, i.e. $11.25
    myTotal.print();
}

Money computeTotal (Money money_array[], int size){
    Money temp;
    temp.setDollars(0);
    temp.setCents(0);
    for (int indx=0; indx<size; indx++){
        //printMoney(temp);
        temp.dollars += money_array[indx].getDollars;
        temp.cents += money_array[indx].getCents;
        if (temp.getCents>99){
            temp.dollars += 1;
            temp.cents -= 100;
        }
        //printMoney(temp);
    }
    
    /* alternative location to perform roll-over of dollars and cents:
    if (temp.cents>99){
        temp.dollars += temp.cents/100;
        temp.cents = temp.cents%100;
    }
    */    
    return temp;
}



