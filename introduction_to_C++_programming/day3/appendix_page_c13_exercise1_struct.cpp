#include <iostream>
#include <cstring>

#define MAX_NAME_LENGTH 20

using std::cout;
using std::endl;

struct account{
    char name[MAX_NAME_LENGTH];
    int accnt;
    double balance;
};

// function prototypes
void print_account(account a);
account initialize(const char* name, int account_ID, double balance);
account deposit(account a, double amount);

int main(){
    account a;
    a=initialize("username",5,10.0);
    print_account(a);
    a=deposit(a,20.0);
    print_account(a);
}

account deposit(account a, double amount){
    a.balance += amount;
    return a;
}

account initialize(const char* name, int account_ID, double balance){
    account temp;
    strcpy(temp.name,name);
    temp.accnt=account_ID;
    temp.balance=balance;
    return temp;
}

void print_account(account a){
    cout << a.name << endl;
    cout << a.accnt << endl;
    cout << a.balance << endl;
}
