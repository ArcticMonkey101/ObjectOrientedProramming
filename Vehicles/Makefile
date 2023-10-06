CC = g++
CFLAGS =

# List of source files
SOURCES = race_main.cpp racing.cpp car.cpp vehicle.cpp

# List of header files
HEADERS = racing.h car.h vehicle.h

# Generate object file names from source file names
OBJECTS = $(SOURCES:.cpp=.o)

# Output executable name
EXECUTABLE = race

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
