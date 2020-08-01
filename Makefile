all: main

main: main.o 
	g++ main.cpp -o main

clean:
	rm -f main
	rm -f *.o


