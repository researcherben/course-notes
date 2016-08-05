//
//   sortdemo.c
//   Alan B.
//   3/18/16
//
//   This program demonstrates qsort and bsearch
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMS 8
#define DBLS 100
#define STRS 10
#define NUMPEOPLE 3
#define NAMESIZE 20

struct person {
    char name[NAMESIZE + 1];
    int age;
};

int compareInts(const void *a, const void *b);
int compareDbls(const void *a, const void *b);
int compareStrings(const void *a, const void *b);
int compareAges(const void *a, const void *b);
int compareNames(const void *a, const void *b);

int main() {

    int numbers[NUMS] = {12, 45, 67, 78, -3, 0, 4, 6};
    double values[DBLS];
    char * colors[STRS] = {"red", "blue", "green", "yellow", "orange", "pink",
                           "gray", "maroon", "purple", "tan"};
    struct person friends[NUMPEOPLE];
    int i;

    for (i = 0; i < DBLS; ++i) {
        values[i] = rand() / 1000.0;
    }

    strcpy(friends[0].name, "Joe");    
    friends[0].age = 99;

    strcpy(friends[1].name, "Susan");    
    friends[1].age = 42;

    strcpy(friends[2].name, "Jane");    
    friends[2].age = 37;

    qsort(numbers, NUMS, sizeof(int), compareInts); // array, size of array, size of elements, pointer to function that does comparison
    for (i = 0; i < NUMS; ++i) {
        printf("%d  ", numbers[i]);
    }
    printf("\n");


    return 0;
}

// return 0 if equal, positive if wrong order, negative if right order
int compareInts(const void *a, const void *b) {
    int *ptra, *ptrb;

    ptra = (int *) a;
    ptrb = (int *) b;
    return (*ptrb - *ptra);
}

int compareDbls(const void *a, const void *b) {
    double *ptra, *ptrb;

    ptra = (double *) a;
    ptrb = (double *) b;
    return (*ptrb - *ptra);
}

int compareStrings(const void *a, const void *b) {
    char **ptra, **ptrb;

    ptra = (char **) a;
    ptrb = (char **) b;

    return (strcmp(*ptra, *ptrb));
}

int compareNames(const void *a, const void *b) {
    struct person *ptra, *ptrb;

    ptra = (struct person *) a; // cast void pointers to struct pointers
    ptrb = (struct person *) b;
    return (strcmp(ptra->name, ptrb->name));
}

int compareAges(const void *a, const void *b) {
    struct person *ptra, *ptrb;

    ptra = (struct person *) a;
    ptrb = (struct person *) b;
    return (ptrb->age - ptra->age);
}
