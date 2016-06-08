//
//   Exercise 14-1
//
#include <stdio.h>

struct money {
     int dollars;
     int cents;
};

typedef struct money MONEY, *PMONEY;

MONEY init(int dollars, int cents);
void add2(MONEY a, MONEY b, PMONEY c);
void print(MONEY a);

main()
{
     MONEY a, b, c;
     a = init(5,10);
     b = init(2,55);
     add2(a, b, &c);
     print(c);
}

MONEY init(int dollars, int cents)
{
     MONEY temp;
     temp.dollars = dollars;
     temp.cents = cents;
     return(temp);
}

void add2(MONEY a, MONEY b, PMONEY c)
{
     c -> dollars = a.dollars + b.dollars;
     c -> cents = a. cents + b.cents;
     if( c -> cents >= 100) {
          c -> cents -= 100;
          c -> dollars++;
     }
}

void print(MONEY a)
{
     if(a.cents <= 9)
          printf("$%d.0%d\n", a.dollars, a.cents);
     else
          printf("$%d.%d\n", a.dollars, a.cents);
}
