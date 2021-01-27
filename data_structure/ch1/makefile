CFLAGS=Wall
main: triplet.o triplet_test.o
	gcc triplet.o triplet_test.o -o main
triplet.o: triplet.c
	gcc -c triplet.c
triplet_test.o: triplet_test.c
	gcc -c triplet_test.c

clean:
	rm -f *.o main
