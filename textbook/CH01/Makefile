sequlist_reverse:  main_reverse.o sequlist.o
	gcc main_reverse.o sequlist.o -o sequlist_reverse

main_reverse.o: main_reverse.c sequlist.h
	gcc -c main_reverse.c

sequlist.o: sequlist.c sequlist.h
	gcc -c sequlist.c

clean:
	-rm *.o

.PHONY: clean
