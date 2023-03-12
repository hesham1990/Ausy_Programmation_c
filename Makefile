#comentaires makefile avec pleusier cibles



all: main


main: main.o fonction.o
	gcc -o main main.o fonction.o


main.o: main.c
	gcc -o main.o -c -Wall -Wextra main.c


fonction.o: fonction.c
	gcc -o fonction.o -c -Wall -Wextra fonction.c


clean:
	rm -rf *.o

mrproper: clean
	rm -rf main
