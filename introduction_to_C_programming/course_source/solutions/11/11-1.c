//
//   Exercise  11 - 1
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

void average(int *table, int amount, double *avg);

main()
{
     char line[20];
     int numbers[MAX], i = 0;
     double avg;
     while(1)
     {
          printf("Enter a number ('quit' to quit): ");
          fgets(line, 20, stdin);
          line[strlen(line) - 1] = '\0';		// Strip off the newline 

          if(strcmp(line, "quit") == 0)
               break;
               
          numbers[i++] = atoi(line);
     }
     average(numbers, i, &avg);
     printf("average is %.2f\n", avg);
}

void average(int *table, int amount, double *avg)
{
     int i;
     *avg = 0;
     for (i = 0; i < amount; i++)
          *avg += table[i];
          
     *avg = *avg / amount;
}
