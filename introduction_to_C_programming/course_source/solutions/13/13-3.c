//
//   Exercise 13-3
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMESIZE 30
#define BANKSIZE 20

struct employee {
     char name[NAMESIZE];
     float pay;
     char dept;
};

void sort(struct employee array_to_sort[], int howmany);
void print(struct employee array_to_print[], int howmany);

main()
{
     struct employee bank[BANKSIZE];
     char temp[NAMESIZE];
     int i = 0;
     
     while(1)
     {
          printf("Enter NAME (or 'quit'): ");
          fgets(temp, NAMESIZE, stdin);
          temp[strlen(temp) - 1] = '\0';

          if(strcmp(temp,"quit") == 0)
               break;

          strcpy(bank[i].name, temp);
     
          printf("Enter PAY: ");
          fgets(temp, NAMESIZE, stdin);
          bank[i].pay = atof(temp);
          
          printf("Enter DEPT: ");
          fgets(temp, NAMESIZE, stdin);
          bank[i].dept = temp[0];
          
          i++;
          if (i == BANKSIZE)
          {
              printf("\nARRAY FULL!\n\n");
              break;
          }
     }
     sort(bank, i);
     print(bank, i);     
}

void print(struct employee array[], int howmany)
{
 	int i; 	
	for (i = 0; i < howmany; i++)
 		printf("%-20s %10.2f %c\n", array[i].name, array[i].pay, array[i].dept);
}

void sort(struct employee array[], int howmany)
{
     int i, j;
     struct employee temp;
     for (i = 0; i < howmany - 1; i++)
          for ( j = i + 1; j < howmany; j++)
               if( strcmp(array[i].name, array[j].name) > 0 )
               {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
               }
}
