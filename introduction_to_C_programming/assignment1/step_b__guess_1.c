#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXRAND 100
int main()
{
  int random_number;
  int guessed_number; 
  int correct_guess=0; // false
  long clock;
  srand(time(&clock));
  random_number=rand() % MAXRAND;
  printf("random number: %d\n", random_number);
  while( ! correct_guess ){
    printf("Guess the random number in the range 0 to %d: ", MAXRAND);
    scanf("%d", &guessed_number);
//    printf("you guessed [[%d]]\n",guessed_number);
    if ( guessed_number== random_number)
      break;
    else
      printf("your guess [[%d]] does not match [[%d]]\n",guessed_number,random_number);
  }
  printf("got it!\n");
}

