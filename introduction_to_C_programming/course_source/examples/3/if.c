/* 
	if.c *
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_menu_selection(void);
void get_dir_listing(void);
void copy_files(void);
void quit_function(void);

int main ()
{
	int x;
    
    while(1) {
       x = get_menu_selection();
           
       if ( x == 0 || x == 'd')
       {
            printf("...getting dir listing...\n");
            get_dir_listing();
       }
       else if ( x == 1 || x == 'c')
       {
            printf("...copying files...\n");
            copy_files();
       }
       else if ( x == 2 || x == 'q')
       {
            printf("...quitting...\n");
            quit_function();
       }
       else
                printf("Illegal choice\n");
    }
}

int get_menu_selection(void)
{
    char c[10];
    int x;
    
    printf("\nEnter menu selection:\n");
    printf("\t0 or d for a directory listing\n");
    printf("\t1 or c to copy files\n");
    printf("\t2 or q to quit\n");

    fgets(c, 10, stdin);

    if (c[0] <= '9' && c[0] >= '0')
    {
        x = atoi(c);
    }
    else
    {
        x = c[0];
    }
    return x;
}

void get_dir_listing(void)
{
    printf("\tInside get_dir_listing\n");
}

void copy_files(void)
{
    printf("\tInside copy_files\n");
}

void quit_function(void)
{
    exit (0);
}
