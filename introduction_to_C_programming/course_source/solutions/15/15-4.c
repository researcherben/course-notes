//  Exercise 15-4
//
// Assume 1 blank between the words.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

main(int argc, char** argv)
{
    FILE *fp;
    char line[MAX];
    int numlines = 0;
    int numchars = 0;
    int numwords = 0;
    int i, length;

    if (argc != 2)
    {
        printf("You must supply filename on command line\n");
        exit(1);
    }
    
    fp = fopen(argv[1], "r");
    if (fp == NULL) 
    {
        printf("Could not open %s\n", argv[1]);
        exit(2); 
    } 
    
    while(fgets(line, MAX, fp) != NULL)
    {
        length = strlen(line);        
        numchars += length;
        
        numlines++;
        
        for (i = 0; i < length; ++i) 
        {
            if (line[i] == ' ' || line[i] == '\n')
            {
                numwords++;
            }
        }
    }
    printf("File:  %s\n", argv[1]);
    printf("  Chars: %d", numchars);
    printf("  Words: %d", numwords);
    printf("  Lines: %d\n", numlines);
}

