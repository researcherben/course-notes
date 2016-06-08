//
//  student.h
//

#ifndef STUDENT_H
#define STUDENT_H

typedef struct student* STUDENTPTR;

typedef struct student
{
	char *name;
	char grade;
	STUDENTPTR next;
} STUDENT;


STUDENTPTR createStudent(void);
void getStudent(STUDENTPTR temp);
void insert(STUDENTPTR* headPtr, STUDENTPTR temp);
int delete(STUDENTPTR*headPtr, char* target);
void printList (STUDENTPTR head);

#endif

