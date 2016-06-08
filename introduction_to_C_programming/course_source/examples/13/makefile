#
#  Makefile for Examples, Chapter 13
#

all: getrec getandput pointers lookup 

getrec : getrec.c employee.h
	gcc -o getrec getrec.c

getandput: getandput.c employee.h
	gcc -o getandput getandput.c

pointers: pointers.c employee.h
	gcc -o pointers pointers.c

lookup: lookup.c employee.h
	gcc -o lookup lookup.c


clean: 
	rm getrec getandput pointers lookup 
