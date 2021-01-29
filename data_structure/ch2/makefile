CFLAGS=Wall
main: sqlist.o sqlist_test.o
	gcc sqlist.o sqlist_test.o -o main
sqlist.o: sqlist.c
	gcc -c sqlist.c
sqlist_test.o: sqlist_test.c
	gcc -c sqlist_test.c

clean:
	rm -f *.o main
