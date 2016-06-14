int atoi(char s[])
{
    int i = 0, n = 0;

    while (s[i] >= '0' && s[i] <= '9')     
        n = 10 * n + s[i++] - '0';
        
    return(n);                
}

