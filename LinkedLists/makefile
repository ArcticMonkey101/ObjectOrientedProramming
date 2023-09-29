CC = g++
CFLAGS = -Wall -std=c++11
TARGET = myprogram
SRCDIR = src
OBJDIR = obj

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))

$(TARGET): $(OBJECTS)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJDIR)/*.o $(TARGET)

.PHONY: clean
