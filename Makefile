CC=gcc

BINARY=bin 
OBJECTS= main.o util.o

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^

main.o: main.c util.h 
	gcc -c -g main.c 

util.o: util.c util.h
	gcc -c -g util.c

clean:
	rm -rf $(BINARY) *.o
