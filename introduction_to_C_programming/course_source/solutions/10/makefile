#
#  Makefile for Solutions, Chapter 10
#

all: 10-1 10-2 10-3



display.o: display.c common.h
	gcc -c display.c

fill.o: fill.c common.h
	gcc -c fill.c

largest.o: largest.c common.h
	gcc -c largest.c

10-1: 10-1.c common.h display.o fill.o largest.o
	gcc -o 10-1 10-1.c display.o fill.o largest.o



getandput.o: getandput.c
	gcc -c getandput.c

10-2: 10-2.c getandput.o
	gcc -o 10-2 10-2.c getandput.o

10-3: 10-3.c getandput.o
	gcc -o 10-3 10-3.c getandput.o

clean: 
	rm 10-1 10-2 10-3 *.o
