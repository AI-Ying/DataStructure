stack: main.o stack.o
	gcc main.o stack.o -o stack
main.o: main.c stack.h
	gcc -c main.c
stack.o: stack.c stack.h
	gcc -c stack.c

clean: 
	rm -rf *.o
