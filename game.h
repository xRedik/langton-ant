#ifndef GAME_H
#define GAME_H


#include<stdio.h>
#include<stdbool.h>
#include"board.h"

void change_way(LangtonAnt *ant,int for_value);
void move_forward(LangtonAnt *ant);
void update_board(LangtonAnt *ant);

#endif