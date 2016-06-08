#include <stdio.h>
int main(){
  int var;
  printf("input a whole number: ");
  scanf( "%d", &var); // scanf is a function, and to change value need to pass the address of variable
  printf("you entered %d\n", var);
}
