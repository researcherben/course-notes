#
#  Makefile for Examples, Chapter 14
#

all: prog

prog: mainprog.o employee.o dbfunc.o util.o
	gcc mainprog.o employee.o dbfunc.o util.o -o prog

mainprog.o: mainprog.c employee.h dbfunc.h
	gcc -c mainprog.c

employee.o: employee.c employee.h util.h
	gcc -c employee.c

dbfunc.o: dbfunc.c dbfunc.h employee.h util.h
	gcc -c dbfunc.c

util.o:	util.c util.h
	gcc -c util.c

clean:
	rm prog *.o

