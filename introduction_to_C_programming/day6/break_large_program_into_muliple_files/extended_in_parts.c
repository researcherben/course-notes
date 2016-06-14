/*
        extended.c
*/
#include <stdio.h>
#include "myheader.h"

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



