/*
    fclose.c
*/
#include <stdio.h>

main(int argc, char **argv) 
{ 
    FILE *fp; 
    int c, ct = 0; 
    while ( --argc > 0 ) 
    { 
        fp = fopen(*++argv, "r");    
        if ( fp == NULL)
        { 
            fprintf(stderr, "err on %s\n",*argv); 
            continue;
        }
        
        ct = 0; 
        while ((c = getc(fp)) != EOF) 
            if (c == '\n') 
                ct++;
                
        fclose(fp);            
        printf("%d %s\n", ct, *argv);
    } 
} 
