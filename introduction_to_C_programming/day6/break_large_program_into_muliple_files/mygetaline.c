#include <stdio.h>
void getaline(char s[])
{
    int i = 0;
    char c;
    
    //  Get a character repeatedly until you get a newline character
    
    while(( c = getchar()) != '\n')                        
        s[i++] = c;
        
    s[i] = '\0';            //  terminate with null character 
}
