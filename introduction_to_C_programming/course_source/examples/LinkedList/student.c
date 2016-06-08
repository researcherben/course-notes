//
//  student.c
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

#include "student.h"

#define NAMESIZE 20

STUDENTPTR createStudent(void)
{
	STUDENTPTR newStudent;

	newStudent = (STUDENTPTR) malloc(sizeof(STUDENT));

	if (newStudent == NULL)
	{
		fprintf(stderr, "Out of Memory - createStudent\n");
		exit(-1);
	}

	newStudent->name = NULL;
	newStudent->grade = 'F';
	newStudent->next = NULL;

	return newStudent;
}

void getStudent(STUDENTPTR temp)
{
	char line[NAMESIZE + 2];
	int length;

	printf("Enter student name: ");
	fgets(line, NAMESIZE + 2, stdin);
	length = strlen(line);
	line[length - 1] = '\0';	// Strip off newline
	--length;

	temp->name = (char*) malloc(length + 1);
	if (temp->name == NULL)
	{
		fprintf(stderr, "Out of Memory - getStudent\n");
		exit(-2);
	}
	
	strcpy(temp->name, line);

	printf("Enter letter grade: ");
	fgets(line, NAMESIZE + 2, stdin);
	temp->grade = line[0];

}

void insert(STUDENTPTR* headPtr, STUDENTPTR temp)
{
	STUDENTPTR prev, curr;

	if (*headPtr == NULL)
		*headPtr = temp;
	else
	{
		prev = NULL;
		curr = *headPtr;

		/* traverse list to the end */
		while(curr != NULL)
		{
			prev = curr;
			curr = curr->next;
		}

		/* insert the node, temp, at the end */
		prev->next = temp;
	}
}

int delete(STUDENTPTR* headPtr, char* target)
{
	STUDENTPTR temp, prev, curr;

	if(*headPtr == NULL)
	{
		printf("Can't delete from an empty list\n");
		return (0);
	}
	
	/* check to see if the target is in the head */
	else if ( strcmp((*headPtr)->name, target) == 0)
	{
		temp = *headPtr;
		*headPtr = (*headPtr)->next;
		free (temp);
		return (1);
	}
	
	/* traverse the list until the target is found */
	else
	{
		prev = *headPtr;
		curr = (*headPtr)->next;

		while(curr != NULL && strcmp(curr->name,target) != 0)
		{
			prev = curr;
			curr = curr->next;
		}

		if (curr != NULL)
		{
			/* delete the node that contains the target value */
			temp = curr;
			prev->next = curr->next;
			free(temp);
			return (1);
		}
		else
		{
			printf("%s was not in the list.\n", target);
			return (0);
		}
	}
}

void printList (STUDENTPTR head)
{
	STUDENTPTR curr;

	if(head == NULL)
		printf("The list is empty\n");
	else
	{
		/* set curr to head */
		curr = head;

		/* traverse the list */
		while(curr != NULL)
		{
			/* print the current student */
			printf("%s %c\n", curr->name, curr->grade);

			/* move to the next student */
			curr = curr->next;
		}
		printf("\n");
	}
}
