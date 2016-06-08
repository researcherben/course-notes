//  Exercise 12-1

#include <stdio.h>
#include <stdlib.h>

main(int argc, char** argv)
{
    int begin, end, step, c;
    double f;
    
    if (argc != 4)
    {
        printf("You must supply command line args\n");
        exit(1);
    }
    
    begin = atoi(argv[1]);
    end   = atoi(argv[2]);
    step  = atoi(argv[3]);

    printf("CELSIUS\tFAHRENHEIT\n");
    for (c = begin; c <= end; c += step)
    {
        f = 1.8 * c + 32;
        printf("%d\t%6.1f\n", c, f);
    }
}
