#include <stdio.h>
int main(){
  int *px;
  int numbers[10];
  int i;
  for ( i = 10-1; i >= 0; i--){
    //numbers[i] = 0;
    *( numbers + i ) = 0; // numbers is an address; increment by 1 of the type of numbers, 4 bytes
                          // Then set contents of that address to zero
  }
  for ( px = numbers + 9; px >= numbers; px--){
    *px = 0;
  }
}
