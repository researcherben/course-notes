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
//    printf("string length: %ld\n",strlen(input));
    input_is_numeric=validate_input_is_numeric(input);
    if (strlen(input)==0){
      printf("need input!\n");
      input_is_numeric=0;
    }

    if (input_is_numeric){
      guessed_number=atoi(input);
      if ((guessed_number<0) || (guessed_number>MAXRAND)){
        printf("guess is out of range. Try again\n");
      } else { // in range
        if ( guessed_number== random_number){
          correct_guess=1; //true
          break;
        }else{
          printf("your guess [[%d]] does not match [[%d]]\n",guessed_number,random_number);
        }
      }
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


