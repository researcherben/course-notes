/*
        extended.c
*/
#include <stdio.h>

#define MAX     100
#define DIGITS  1
#define LIMIT   100

void   getaline (char s[]);
int    strcmp  (char s[], char t[]);
int    check   (char s[]);
int    atoi    (char s[]);
double average (int nums[], int amt);

int main()
{
    char line[MAX];
    int numbers[LIMIT], i = 0;
    double answer;

    while(1)
    {
        printf("Enter a NUMBER (or 'quit' to exit): ");
        getaline(line);
        
        if(strcmp(line, "quit") == 0)
            break;
            
        if(check(line) == DIGITS)
        {
            numbers[i++] = atoi(line);
            if(i == LIMIT) {
                 printf("ARRAY FULL!\n");
                 break;
            }
        }        
        else            
            printf("%s is not all digits\n", line);
    }
    
    answer = average(numbers, i);
    printf("%.2f\n", answer);
}

void getaline(char s[])
{
    int i = 0;
    char c;
    
    //  Get a character repeatedly until you get a newline character
    
    while(( c = getchar()) != '\n')                        
        s[i++] = c;
        
    s[i] = '\0';            //  terminate with null character 
}

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

int atoi(char s[])
{
    int i = 0, n = 0;

    while (s[i] >= '0' && s[i] <= '9')     
        n = 10 * n + s[i++] - '0';
        
    return(n);                
}

double average(int nums[], int amt)
{
    int i;
    int sum = 0;

    for (i = 0; i < amt; i++)            
        sum = sum + nums[i];
        
    return ((double) sum / amt);            
}


