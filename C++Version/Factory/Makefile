CC=g++
DEBUG=-g
CFLAGS=-c -std=c++1y $(DEBUG)
LDFLAGS= $(DEBUG) -std=c++1y
SOURCES=test.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=test

all: clean $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXECUTABLE) 