/*
        switch.c
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_menu_selection(void);
void get_dir_listing(void);
void copy_files(void);
void quit_function(void);

main ()
{
	int x;
	
	while(1)
	{
       x = get_menu_selection();
       switch(x)
       {
	      case 0:
	      case 'd':
		     printf("...getting dir listing...\n");
		     get_dir_listing();
		     break;
		     
	      case 1:
	      case 'c':
		     printf("...copying files...\n");
		     copy_files();
		     break;
		     
	      case 2:
	      case 'q':
		     printf("...quitting...\n");
		     quit_function();
		     
	      default:
		     printf("Illegal choice\n");
		}
	}
}

int get_menu_selection(void)
{
	char c[10];
	int x;
	
	printf("Enter menu selection:\n");
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
	printf("Inside get_dir_listing\n");
}

void copy_files(void)
{
	printf("Inside copy_files\n");
}

void quit_function(void)
{
	exit (0);
}
