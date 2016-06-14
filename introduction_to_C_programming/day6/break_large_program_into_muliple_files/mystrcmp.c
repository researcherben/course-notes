int strcmp(char s[], char t[])
{
    int i = 0;
    
    //  Compare a char from each array until they are
    //  different or until end of the array
    
    while(s[i] == t[i])        
        if(s[i++] == '\0')
            return(0);      /* strings are equal  */
            
    return(s[i] - t[i]);    /* string are unequal */
}

