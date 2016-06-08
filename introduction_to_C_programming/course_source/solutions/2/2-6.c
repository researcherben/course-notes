//  Exercise 2-6

#include <stdio.h>
#include <math.h>

main()
{
    double amount = 200000.0;
    double rate = 7.5;
    int years = 30;

    double monthlyPayment;
    double j;
    int n;
    
    j = rate / (12 * 100);
    n = years * 12;
    
    monthlyPayment = amount * ( j / (1 - pow( (1 + j), -n) ) );
    
    printf("Monthly payment = %10.2f\n", monthlyPayment);
}

