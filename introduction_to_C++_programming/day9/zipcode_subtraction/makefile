
all: read_cities

read_cities: read_cities.cpp Zipcode.o
	g++ read_cities.cpp Zipcode.o

Zipcode.o: Zipcode.cpp
	g++ -c Zipcode.cpp

clean: 
	rm *.o a.out

