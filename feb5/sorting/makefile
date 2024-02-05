TARGET=sorting
CXXFLAGS=-ansi -pedantic-errors -Wall -Wconversion -g

$(TARGET): main.cpp utils.o
	g++ utils.o -g main.cpp -o $(TARGET)

utils.o: utils.cpp utils.h
	g++ $(CXXFLAGS) -c utils.cpp 

clean:
	/bin/rm -f  *~ *.o $(TARGET)

all: clean $(TARGET)
