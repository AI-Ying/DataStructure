queue: main.o queue.o
	gcc main.o queue.o -o queue
main.o: main.c queue.h
	gcc -c main.c
queue.o: queue.c queue.h
	gcc -c queue.c

clean:
	rm -rf *.o
