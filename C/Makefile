CC = gcc 
CFLAGS = -g -Wall
RM = rm 

default: bubbleSort

bubbleSort: bubbleSort.o
	$(CC) $(CFLAGS) -o bubbleSort bubbleSort.o 

bubbleSort.o: bubbleSort.c bubbleSort.h
	$(CC) $(CFLAGS) -c bubbleSort.c

clean: 
	$(RM) bubbleSort *.o


