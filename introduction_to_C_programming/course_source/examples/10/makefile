#
#  Makefile for Examples, Chapter 10 
#

all: starter main

starter: starter.c
	gcc -o starter starter.c

fun1.o: fun1.c
	gcc -c fun1.c

fun2.o: fun2.c
	gcc -c fun2.c

main: main.c fun1.o fun2.o
	gcc -o main main.c fun1.o fun2.o

clean: 
	rm starter main *.o

