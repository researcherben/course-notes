/*
        grades.c
*/
#include <stdio.h>

#define NO_STUDENTS 20
#define MAX_TESTS   10

int total(int array[], int amount);

main()
{
    int grades[NO_STUDENTS][MAX_TESTS];
    int sum, i, j;

    /* the nested for-loops simulate
       reading in values for the array
    */
    for (i = 0; i < NO_STUDENTS; i++)
        for ( j = 0; j < MAX_TESTS; j++)
            grades[i][j] = 80 + i * j;
                    
    for (i = 0; i < NO_STUDENTS; i++) {
        sum = total(grades[i], MAX_TESTS);
        printf("Sum for row %d is %d\n", i, sum);
    }
}

int total(int array[], int amount)
{
    int i, sum = 0;
        
    for ( i = 0; i < amount; i++)
        sum = sum + array[i];
            
    return(sum);
}
