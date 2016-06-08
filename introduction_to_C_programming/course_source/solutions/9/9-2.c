//
//   Exercise 9-2
//
#include <stdio.h>
#include <stdlib.h>

#define ROW 5
#define COLS 3

void fill(int num[], int howmany);
void print(int num[], int howmany);
int largest(int num[][COLS], int amount);

main()
{
     int numbers[ROW][COLS];
     int i, ans;
     for (i = 0; i < ROW; i++)  {
	  printf("enter data for ROW %d ", i + 1);
          fill(numbers[i], COLS);
          print(numbers[i], COLS);
     }
     ans = largest(numbers, ROW);
     printf("largest is %d\n", ans);
}

void fill(int num[], int howmany)
{
     int i;
     char line[20];

     putchar('\n');
     for(i = 0; i < howmany; i++)
     {
	      printf("enter number %d ",i + 1);
          num[i] = atoi(fgets(line, 20, stdin));
     }
}

void print(int num[], int howmany)
{
     int i;

     for(i = 0; i < howmany; i++)
          printf("%d ", num[i]);
          
     putchar('\n');
}

int largest(int num[][COLS], int amount)
{
     int large = num[0][0];
     int i, j;
     for ( i = 0; i < amount; i++)
          for (j = 0; j < COLS; j++)
               if(num[i][j] > large )
                    large = num[i][j];
                    
     return(large);
}
