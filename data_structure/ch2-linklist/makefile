CFLAGS=Wall
main: lklist.o lklist_test.o
	gcc lklist.o lklist_test.o -o main
lklist.o: lklist.c
	gcc -c lklist.c
lklist_test.o: lklist_test.c
	gcc -c lklist_test.c

clean:
	rm -f *.o main
