//
//   Exercise 11-2
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
//	IMPORTANT TO INCLUDE <math.h> for 'sqrt()' prototype
//
#include <math.h>

#define MAX 10

void stats(int *table, int amount, double *mean, double *variance);

main()
{
     char line[20];
     int numbers[MAX], i = 0;
     double avg, var;
     //
     // This loop gets the input from the user
     //
     while(1)
     {				
          printf("Enter a number ('quit' to quit): ");
          fgets(line, 20, stdin);
          line[strlen(line) - 1] = '\0';		// Strip off the newline
          if(strcmp(line,"quit") == 0)
               break;
               
          numbers[i++] = atoi(line);
     }
     
     stats(numbers, i, &avg, &var);
     printf("average  is: %.2f\n", avg);
     printf("varience is: %.2f\n", var);
}

void stats(int *table, int amount, double *mean, double *variance)
{
     int i;
     double diffs = 0.0, sum_of_diffs = 0.0;
     *mean = 0.0;
     *variance = 0.0;
     for (i = 0; i < amount; i++)
          *mean += table[i];
     *mean = *mean / amount;
     for ( i = 0; i < amount; i++) {
          diffs = *mean - table[i];
	  diffs = diffs > 0 ? diffs : -diffs;
          sum_of_diffs = sum_of_diffs + diffs * diffs;
     }
     *variance = sqrt(sum_of_diffs);
}
