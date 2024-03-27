TARGET=recursion
CXXFLAGS=-ansi -pedantic-errors -Wall -Wconversion -g

$(TARGET): main.cpp $(TARGET).o linkedlist.o
	g++ $(TARGET).o linkedlist.o -g main.cpp -o $(TARGET)

$(TARGET).o: $(TARGET).cpp $(TARGET).h
	g++ $(CXXFLAGS) -c $(TARGET).cpp 

linkedlist.o: linkedlist.cpp linkedlist.h
	g++ $(CXXFLAGS) -c linkedlist.cpp

clean:
	/bin/rm -f  *~ *.o $(TARGET)

all: clean $(TARGET)
