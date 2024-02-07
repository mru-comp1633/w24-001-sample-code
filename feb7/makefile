TARGET=cstrings
CXXFLAGS=-ansi -pedantic-errors -Wall -Wconversion -g

$(TARGET): main.cpp $(TARGET).o
	g++ $(TARGET).o -g main.cpp -o $(TARGET)

$(TARGET).o: $(TARGET).cpp $(TARGET).h
	g++ $(CXXFLAGS) -c $(TARGET).cpp 

clean:
	/bin/rm -f  *~ *.o $(TARGET)

all: clean $(TARGET)

anything:
	echo "Hey, you built the anything target!"
