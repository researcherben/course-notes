#include <stdio.h>
int main()
{
  printf("INT occupies %ld bytes\n", sizeof(int)); // integer
  printf("DOUBLE occupies %ld bytes\n", sizeof(double)); // double handles non-integer values
}
