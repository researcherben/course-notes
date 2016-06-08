#
#  Makefile for Solutions, Chapter 17
#

all: 17-1.o 17-2.o 17-3

17-1.o: 17-1.c employee.h
	gcc -c 17-1.c

17-2.o: 17-2.c employee.h
	gcc -c 17-2.c

17-3: 17-3.c
	gcc -o 17-3 17-3.c

clean: 
	rm *.o 17-3
