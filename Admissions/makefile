CC = g++
CFLAGS = -Wall -std=c++11

# List of source files
SOURCES = main.cpp calculator.cpp log_functions.cpp math_functions.cpp

# List of header files
HEADERS = calculator.h log_functions.h math_functions.h

# Generate object file names from source file names
OBJECTS = $(SOURCES:.cpp=.o)

# Output executable name
EXECUTABLE = main.exe

# Default target to build the executable
all: $(EXECUTABLE)

# Link object files to create the executable
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

# Compile source files into object files
%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean up intermediate files and the executable
clean:
	rm -f $(EXECUTABLE) $(OBJECTS)

