#
#  Makefile for Examples, LinkedList
#

all: linkedlist

student.o: student.c student.h
	gcc -c student.c

linkedlist: linkedlist.c student.o
	gcc -o linkedlist linkedlist.c student.o

clean:
	rm linkedlist *.o

