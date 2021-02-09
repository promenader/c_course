CFLAGS=-Wall -g

all: main

main: object.o main.o
	gcc -o main object.o main.o
object.o:
	gcc -c object.c
main.o:
	gcc -c main.c