#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAXRAND 100
#define MAXINPUTLENGTH 20
int validate_input_is_numeric(char input[]);
int main()
{
  int random_number;
  int guessed_number; 
  int correct_guess=0; // BOOLEAN, false
  int input_is_numeric=0; // BOOLEAN, false
  long clock;
  char input[MAXINPUTLENGTH];
  srand(time(&clock));
  random_number=rand() % MAXRAND;
  printf("random number: %d\n", random_number);
  while( ! correct_guess ){
    printf("Guess the random number in the range 0 to %d: ", MAXRAND);
    fgets(input, MAXINPUTLENGTH, stdin);
    input[strlen(input)-1]='\0';
    input_is_numeric=validate_input_is_numeric(input);
//    printf("input_is_numeric: %d\n",input_is_numeric);
    if (input_is_numeric){
      guessed_number=atoi(input);
//    printf("you guessed [[%d]]\n",guessed_number);
      if ( guessed_number== random_number)
        break;
      else
        printf("your guess [[%d]] does not match [[%d]]\n",guessed_number,random_number);
    }else{
      printf("non-numeric input detected. Try again\n");
    }
  }
  printf("got it!\n");
}

int validate_input_is_numeric(char input[]){
  int indx=0;
  char this_char=input[indx];
//  printf("input is [[%s]]\n",input);
  while (this_char != '\0'){
//    printf("this char is [[%c]], aka [[%x]]\n",this_char,this_char);
    if (this_char != '-' && (this_char < '0' || this_char > '9')){
//      printf("this char: [[%c]]\n",this_char);
      return 0; //false
    }
    this_char=input[++indx];
  }
//  printf("returning 1\n");
  return 1; // true
}


