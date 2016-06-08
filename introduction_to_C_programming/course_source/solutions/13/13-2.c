//
//   Exercise 13-2
//
#include <stdio.h>

struct money {
     int dollars;
     int cents;
};

struct money init(int dollars, int cents);
void add2(struct money a, struct money b, struct money *c);
void print(struct money a);

main()
{
     struct money a,b,c;
     a = init(5,10);
     b = init(2,95);
     add2(a,b,&c);
     print(c);
}

struct money init(int dollars, int cents)
{
     struct money temp;
     temp.dollars = dollars;
     temp.cents = cents;
     return(temp);
}

void add2(struct money a, struct money b, struct money *c)
{
     c -> dollars = a.dollars + b.dollars;
     c -> cents = a. cents + b.cents;
     if( c -> cents >= 100) {
          c -> cents -= 100;
          c -> dollars++;
     }
}

void print(struct money a)
{
     if(a.cents <= 9)
          printf("$%d.0%d\n", a.dollars, a.cents);
     else
          printf("$%d.%d\n", a.dollars, a.cents);
}
