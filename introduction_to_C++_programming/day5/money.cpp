/*
Write and test a function that takes two parameters: an array of money structures and the size of the array.  The function returns a money structure that represents the total value of all the money structures in the array.
*/

#include <iostream>
#include <iomanip> // parameterized manipulators
using std::cout;
using std::endl;
using std::setw;
using std::setfill;

#define SIZE 3

// motivation for separating dollars and cents: to avoid float arithmetic
struct money { // default is that struct content is public
    int dollars;
    int cents;
};

void moreMoney(money & cash, int multiplyFactor);   // function prototype
money computeTotal (money array[], int size);
void printMoney(money m);

int main(){
    money myMoney[SIZE];
    money myTotal;

    myMoney[0].dollars = 2;
    myMoney[0].cents = 50;

    myMoney[1].dollars = 3;
    myMoney[1].cents = 50;

    myMoney[2].dollars = 5;
    myMoney[2].cents = 25;

    //myTotal = computeTotal(myMoney, SIZE); // myTotal should have dollars=11, cents=25, i.e. $11.25
    printMoney(myTotal);
    
    moreMoney(myMoney, 100);
    
}
/*
money computeTotal (money money_array[], int size){
    money temp;
    temp.dollars=0;
    temp.cents=0;
    for (int indx=0; indx<size; indx++){
        //printMoney(temp);
        temp.dollars += money_array[indx].dollars;
        temp.cents += money_array[indx].cents;
        if (temp.cents>99){
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
    * /    
    return temp;
}
*/
void printMoney(money m){
    cout << "amount: $" << m.dollars << "." << setw(2) << setfill('0') << m.cents << endl;
}

void moreMoney(money & cash, int multiplyFactor){
    cash.dollars *= multiplyFactor;
    cash.cents *= multiplyFactor;
    
    if (cash.cents>99){
        cash.dollars += (cash.cents/100);
        cash.cents = (cash.cents % 100);
    }
}


