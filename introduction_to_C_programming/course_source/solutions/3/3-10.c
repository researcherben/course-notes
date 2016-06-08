//  Exercise 3-10

#include <stdio.h>

main()
{
	int i;
	
    for (i = -4; i <= 4; ++i) 
    {
        if ( i == 0)
        {
            printf("%d is even\n", i);
        } 
        else if (i < 0) 
        {
            printf("%d is negative and ", i);
            if ( i % 2 == 0)
            {
                printf("even\n");
        	}    
            else
            {
                printf("odd\n");
            }
        } 
        else 
        {
            printf("%d is positive and ", i);
            if ( i % 2 == 0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        } 
    } 
}

