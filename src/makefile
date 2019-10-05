CFLAGS = -Wall
CC = gcc
DEPS = livros.h
OBJS = biblioteca.o livros.o

%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS)

biblioteca: $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o