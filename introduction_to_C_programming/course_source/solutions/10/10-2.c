//
//   Exercise 10 - 2
//
//   NOTE:  This program is intended to be created
//          by compiling and linking two separate files
//          (10-2.c AND getandput.c) 
//
//******************
//
//   THE 10-2.c FILE
//
//******************

#include <stdio.h>

int  get_max_pos();
void put(int value, int position);
int  get(int position);

main()
{
     int i, max_pos;

     max_pos = get_max_pos();
     
     for ( i = 0; i <= max_pos; i++)
          put(i,i);
          
     for ( i = 0; i <= max_pos; i++)
          printf("%d ", get(i));
}

