all : langtonant

clean :
	rm *.o langtonant
	
dist:
	tar -czvf gameoflife.tar.gz *.c *.h makefile

game.o: game/game.h game/game.c
	gcc -c game/game.c

board.o: board/board.h board/board.c
	gcc -c board/board.c

langtonant : main.c game/game.h game.o board/board.h board.o
	gcc -o langtonant main.c game.o board.o
