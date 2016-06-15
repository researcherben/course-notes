#include <stdio.h> // printf
#include <stdlib.h> // exit
// Use: temp begin_C end_C increment
int main(int argc, char **argv){
  int begin_temp, end_temp, increment;
  if (argc != 4){
    printf("Use: temp begin_C end_C increment\n");
    exit(1);
  } else {
    begin_temp=atoi(argv[1]);
    end_temp=atoi(argv[2]);
    increment=atoi(argv[3]);
    printf("begin (C): %d; end (C): %d; increment: %d\n",begin_temp, end_temp, increment);
  }
  printf("CELSIUS | FAHRENHEIT\n");
  for (int temp_C=begin_temp; temp_C<=end_temp; temp_C+=increment){
    double temp_F;
    temp_F = 1.8*temp_C + 32;
    printf("%d         %.1f\n",temp_C, temp_F);
  }
}
