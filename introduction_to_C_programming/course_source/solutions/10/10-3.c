//
//   Exercise 10 - 3
//
//   NOTE:  This program is intended to be created
//          by compiling and linking two separate files
//          (10-3.c AND getandput.c) 
//
//******************
//
//   THE 10-3.c FILE
//
//******************

#include <stdio.h>
#include <stdlib.h>

#define LINESIZE 128

int  get_max_pos();
void put(int value, int position);
int  get(int position);

main()
{
    int i, num, max_pos;
    char line[LINESIZE];

    max_pos = get_max_pos();
     
    for (i = 0; i <= max_pos; i++)
    {
        printf("Enter #%2d of %d: ", i + 1, max_pos + 1);
        num = atoi(fgets(line, LINESIZE, stdin));   
        put(num, i);
    }
          
    for (i = max_pos; i >= 0; i--)
    {
        printf("%d ", get(i));
    }
    printf("\n");
}

