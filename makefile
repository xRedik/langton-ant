all : langtonant

clean :
	rm *.o langtonant
	
dist:
	tar -czvf gameoflife.tar.gz *.c *.h makefile

game.o: game.h game.c
	gcc -c game.c

board.o: board.h board.c
	gcc -c board.c

langtonant : main.c game.h game.o board.h board.o
	gcc -o langtonant main.c game.o board.o