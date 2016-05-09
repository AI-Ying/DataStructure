sequlist_sprit: main_sprit.o sequlist.o
	gcc main_sprit.o sequlist.o -o sequlist_sprit
main_sprit.o: main_sprit.c sequlist.h
	gcc -c main_sprit.c
sequlist.o: sequlist.c sequlist.h
	gcc -c sequlist.c


clean:
	-rm *.o

.PHONY: clean
