CXXFLAGS=-ansi -pedantic-errors -Wall -Wconversion -g

file_demo: main.cpp time.o
	g++ time.o -g main.cpp -o file_demo

time.o: time.cpp time.h
	g++ $(CXXFLAGS) -c time.cpp 

clean:
	/bin/rm -f  *~ *.o file_demo

all: clean file_demo
