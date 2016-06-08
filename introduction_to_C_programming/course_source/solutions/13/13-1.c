//
//   Exercise 13-1 
//
#include <stdio.h>

struct money {
    int dollars;
    int cents;
};

struct money init(int dollars, int cents);
struct money input(void);
struct money add(struct money a, struct money b);
void print(struct money a);

main()
{
    struct money a, b, c;
    
    a = init(5,10);
    b = input();
    c = add(a,b);
    print(c);
}

struct money init(int dollars, int cents)
{
    struct money temp;
    
    temp.dollars = dollars;
    temp.cents = cents;
    return(temp);
}

struct money input()
{
    struct money temp;
    char line[100];

    printf("Enter dollars: ");
    temp.dollars = atoi(fgets(line, 100, stdin));
    printf("Enter cents: ");
    temp.cents = atoi(fgets(line, 100, stdin));
    return(temp);
}

struct money add(struct money a, struct money b)
{
    struct money temp;
    temp.dollars = a.dollars + b.dollars;
    temp.cents = a. cents + b.cents;
    if(temp.cents >= 100) {
        temp.cents -= 100;
        temp.dollars++;
    }
    return(temp);
}

void print(struct money a)
{
  if(a.cents <= 9)
       printf("$%d.0%d\n", a.dollars, a.cents);
  else
       printf("$%d.%d\n", a.dollars, a.cents);
}
