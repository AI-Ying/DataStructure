sequlist_merge: main_merge.o sequlist.o
	gcc main_merge.o sequlist.o -o sequlist_merge

main_merge.o: main_merge.c sequlist.h
	gcc -c main_merge.c

sequlist.o: sequlist.c sequlist.h
	gcc -c sequlist.c

clean:
	-rm *.o

.PHONY: clean
