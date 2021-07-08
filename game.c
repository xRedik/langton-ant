#include<stdio.h>
#include<stdbool.h>
#include"board.h"
#include"game.h"

void update_board(LangtonAnt *ant){
    change_way(ant,get_value(ant,ant->ant_place_i,ant->ant_place_j));
    if(!get_value(ant,ant->ant_place_i,ant->ant_place_j))
        set_value(ant,ant->ant_place_i,ant->ant_place_j,1);
    else
        set_value(ant,ant->ant_place_i,ant->ant_place_j,0);
    move_forward(ant);
}

void change_way(LangtonAnt *ant,int for_value){
    if(ant->head_way=='l'){
        if(for_value==0)
            ant->head_way='u';
        else
            ant->head_way='b';
    }
    else if(ant->head_way=='r'){
        if(for_value==0)
            ant->head_way='b';
        else
            ant->head_way='u';
    }
    else if(ant->head_way=='u'){
        if(for_value==0)
            ant->head_way='r';
        else
            ant->head_way='l';
    }
    else if(ant->head_way=='b'){
        if(for_value==0)
            ant->head_way='l';
        else
            ant->head_way='r';
    }
}

void move_forward(LangtonAnt *ant){
    if(ant->head_way=='u'){
        if(ant->ant_place_i!=0)
            ant->ant_place_i-=1;
    }
    else if(ant->head_way=='b'){
        if(ant->ant_place_i!=ant->width-1)
            ant->ant_place_i+=1;
    }
    else if(ant->head_way=='l'){
        if(ant->ant_place_j!=0)
            ant->ant_place_j-=1;
    }
    else if(ant->head_way=='r'){
        if(ant->ant_place_j!=ant->height-1)
            ant->ant_place_j+=1;
    }
}