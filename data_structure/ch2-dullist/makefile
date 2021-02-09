CFLAGS=Wall
main: dullist.o dullist_test.o
	gcc dullist.o dullist_test.o -o main
dullist.o: dullist.c
	gcc -c dullist.c
dullist_test.o: dullist_test.c
	gcc -c dullist_test.c

clean:
	rm -f *.o main
