//
//   Exercise 12-2
//
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void average(int *table, int amount, double *avg);

main()
{
     char line[20];
     int i = 0, n;
     int *pi;
     double avg;

     printf("How many numbers will you input? ");
     fgets(line, 20, stdin);
     n = atoi(line);

     pi = malloc(n * sizeof(int));
     if( pi == NULL)
     {
          printf("malloc: out of memory\n");
          exit(1);
     }
     
     for(i = 0; i < n; i++)
     {
          printf("Enter number %d ", i + 1);
          fgets(line, 20, stdin);
          *(pi  + i )= atoi(line);
     }
     
     average(pi, i, &avg);
     printf("AVG = %.2f\n", avg);
}

void average(int *table, int amount, double *avg)
{
     int i;

     for (i = 0; i < amount; i++)
          *avg += table[i];
     *avg = *avg / amount;
}
