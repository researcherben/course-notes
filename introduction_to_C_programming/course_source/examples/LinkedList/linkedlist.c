//
//  linkedlist.c
//

#include <stdio.h>
#include "student.h"

main()
{
	STUDENTPTR head, temp;
	int success;
	char* line;

	head = NULL;
	line = "Patti";

	temp = createStudent();
	getStudent(temp);
	insert(&head, temp);

	temp = createStudent();
	getStudent(temp);
	insert(&head, temp);
	printList(head);

	line = "Patti";
	success = delete(&head, line);

	printf("%s was%s successfully deleted\n", line, success ? "" : " not");

	printList(head);
}

