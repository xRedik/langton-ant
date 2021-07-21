#ifndef BOARD_H
#define BOARD_H


#include<stdio.h>
#include<stdlib.h>

#define YELLOW "\e[43m  \033[m"
#define BLUE "\e[44m  \033[m"
#define WHITE "\e[47m  \033[m"
#define BLACK "\e[40m  \033[m"
#define CLEAR_SCREEN "\e[1;1H\e[2J"

typedef struct{
    int width;
    int height;
    int ant_place_i;
    int ant_place_j;
    char head_way;
    int *board;
} LangtonAnt;

int get_value(LangtonAnt *ant, int row, int column);
void set_value(LangtonAnt *ant, int row, int column, int value);
void new_langton_ant(LangtonAnt *ant,int width,int height, char *type_place);
void color_value(LangtonAnt *ant,int row, int column);
void show_board(LangtonAnt *ant);

#endif