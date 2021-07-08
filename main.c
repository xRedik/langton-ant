#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<unistd.h>
#include"board.h"
#include"game.h"

int main(int argc, char *argv[]){
    if(argc<2){
        printf("Please enter the width and height of the board as argument\n");
        return 0;
    }
    int width = atoi(argv[1]), heigth = atoi(argv[2]);

    srand(time(NULL));
    LangtonAnt ant;
    new_langton_ant(&ant,width,heigth,"default");
    update_board(&ant);
    while(true){
        show_board(&ant);
        update_board(&ant);
        sleep(1);
    }
}