
all: read_cities perms

perms: permutations_of_zipcodes.cpp Zipcode.o
	g++ permutations_of_zipcodes.cpp Zipcode.o -o perms.lex

read_cities: read_cities.cpp Zipcode.o
	g++ read_cities.cpp Zipcode.o -o read.lex

Zipcode.o: Zipcode.cpp
	g++ -c Zipcode.cpp

clean: 
	rm *.o a.out *.lex

