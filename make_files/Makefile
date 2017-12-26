CC=gcc
CFLAGS=-I.
DEPS = add.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
add: add.o addfun.o
	gcc -o add add.o addfun.o -I.
