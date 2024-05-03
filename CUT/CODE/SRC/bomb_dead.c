
/*******************************************************************************
 * File    : bomb_dead.c
 * Author  : Aditya Srivastava 
 * Date    : 26-Oct-2022
 * Purpose : When a player steps on the maze that is near a bomb a message with alert will be printed and ifplayer steps on the bomb game over.
 *         : Elabyrinth game
*******************************************************************************/

#include <stdio.h>


int ex=0;
void bombsuggest(){
    int run=ans[a][b];
        if(run%19==0){
        printf("\nCAUTIOUS !!! Bomb a head");
        }
    return;
}
void dead(){
    if(ans[a][b]%11==0){
        printf("\nYou have touched the bomb - You failed the game");
        ex=1;
    }
}

