#include "myheader.h"
int check(char s[])
{
    int i = 0;
    
    //  Loop through the string, looking for the null char.
    //  If you find a non digit character, return ! DIGITS
               
    for (i = 0; s[i] != '\0'; i++)
        if(s[i] < '0' || s[i] > '9')         
            return(! DIGITS);
            
    return(DIGITS);        
}

