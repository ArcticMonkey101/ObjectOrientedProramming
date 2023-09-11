CC = g++
CFLAGS = -std=c++11

all: calculator

calculator: main.o calculator.o
    $(CC) $(CFLAGS) -o calculator main.o calculator.o

main.o: main.cpp calculator.h
    $(CC) $(CFLAGS) -c main.cpp

calculator.o: calculator.cpp calculator.h
    $(CC) $(CFLAGS) -c calculator.cpp

clean:
    rm -rf *.o calculator
