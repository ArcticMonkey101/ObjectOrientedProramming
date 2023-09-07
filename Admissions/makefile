CC = g++
CFLAG = 


main.exe : main.o admissions.o
	$(CC) $(CFLAG) -o main.exe main.o admissions.o


main.o : main.cpp
	$(CC) $(CFLAG) -c main.cpp

admissions.o : admissions.cpp
	$(CC) $(CFLAG) -c admissions.cpp

clean :
	rm -f main.exe *o

