all: mymalloc.o memgrind.o memgrind

mymalloc.o: mymalloc.c
	gcc -c mymalloc.c

memgrind.o: memgrind.c
	gcc -c memgrind.c

memgrind: mymalloc.h mymalloc.o memgrind.o
	gcc -o memgrind mymalloc.o memgrind.o

clean:
	rm -f memgrind *.o