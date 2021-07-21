#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"board.h"

void new_langton_ant(LangtonAnt *ant,int width,int height, char *type_place){
    ant->width=width;
    ant->height=height;
    ant->head_way = 'r';

    if(!strcmp("default",type_place)){
        ant->ant_place_i = width/2;
        ant->ant_place_j = height/2;
    }
    ant->board = (int *)malloc(ant->width*ant->height*sizeof(int));
    for(int i=0;i<ant->width;i++)
        for(int j=0;j<ant->height;j++)
            set_value(ant,i,j,0);
}

int get_value(LangtonAnt *ant, int row, int column){
    return *(ant->board + column*ant->height + row);
}

void set_value(LangtonAnt *ant, int row, int column, int value){
    *(ant->board + column*ant->height + row) = value;
}

void color_value(LangtonAnt *ant,int row, int column){
  if(get_value(ant,row,column))
    printf(YELLOW);
  else
    printf(BLACK);
}

void show_board(LangtonAnt *ant){
  printf(CLEAR_SCREEN);
  for(int i=0;i<ant->height;i++){
    for(int j=0;j<ant->width;j++)
      color_value(ant,i,j);
    printf("\n");
  }
}
