//
//   Exercise 7-1
//   Exercise 7-2
//
#include <stdio.h>

unsigned int set(unsigned int x, int num);
unsigned int unset(unsigned int x, int num);

main()
{
     unsigned int x = 0;
     x = set(x,1);
     printf("%o\n",x);
     x = set(x,4);
     printf("%o\n",x);
     x = ~0;
     printf("%o\n",x);
     x = unset(x,1);
     printf("%o\n",x);
     x = unset(x,4);
     printf("%o\n",x);
}

unsigned int set(unsigned int x, int num)
{
     unsigned int mask;

     mask = 1 << (num - 1);
     x = x | mask;
     return(x);
}

unsigned int unset(unsigned int x, int num)
{
     unsigned int mask;

     mask = 1 << (num - 1);
     x = x & ~mask;
     return(x);
}
