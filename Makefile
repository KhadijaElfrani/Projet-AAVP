CC = gcc
CFLAGS = -Wall -Wextra -g

all: HAMMING

HAMMING: main.o header.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.cpp header.h
	$(CC) $(CFLAGS) -c -o $@ $<

header.o: header.cpp header.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f HAMMING main.o header.o
