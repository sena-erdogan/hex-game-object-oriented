main: main.o hexlib.o
	g++ main.o hexlib.o -o main
	./main
	
main.o: main.cpp
	g++ -std=gnu++11 -c main.cpp
	
hexlib.o: hexlib.cpp
	g++ -std=gnu++11 -c hexlib.cpp
	
clean:
	rm *.o main
