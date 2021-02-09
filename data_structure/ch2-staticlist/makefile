CFLAGS=Wall
main: stlist.o stlist_test.o
	gcc stlist.o stlist_test.o -o main
stlist.o: stlist.c
	gcc -c stlist.c
stlist_test.o: stlist_test.c
	gcc -c stlist_test.c

clean:
	rm -f *.o main
