//  Exercise 3-9

#include <stdio.h>

main()
{
	int i, square, cube;
	
    for (i = 20; i <= 60; i += 2) 
    {
	    square = i * i;
	    cube = square * i;
	    
        printf("%10d%10d%10d\n", i, square, cube);
    }

}

