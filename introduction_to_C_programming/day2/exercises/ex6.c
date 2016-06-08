#include <stdio.h>
#include <math.h>
int main(){
  double M, // monthly payment
         P, // loan amount
         I, // interest rate
         J; 
  int N; // number of months over which the loan is amoratized

  P=200000;
  I=7.5;
  N=30*12;

  J=I/(12*100);
  M=P*(J/(1-(pow((1+J),-N))));
  printf("%.2f\n",M);
}
