#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <main.h>

#include "readMazeCSV.c"
#include "menu_Maze.c"
#include "read_Square_Rectangle_Maze.c"
#include "bomb_dead.c"
#include "player_movement.c"

/*******************************************************************************
 * File    : project.c
 * Author  : sandeep,aditya,anadi mishra,harsh vardhan,shivant
 * Date    : 19-Oct-2022
 * Purpose : design of maze game
 *         : An example of eylabyrinth game
*******************************************************************************/


//These are the global declarations which will be using in every part of code//
int ans[MAX_ROW][MAX_COL];
int lock = 0; //count=0, run=1, lock=0;
int a, b;// ex=0;
FILE *reportfile;
char type;

//This is the report file. The movements of the player is saved in this file//

void report(){
    reportfile = fopen("../reports/report.txt","w");
        if(reportfile == NULL)
        {
            printf("Error in opening the report file");   
            exit(1);             
        }
    return;
}

//This file reads the type of maze user choose and goes to the functions accordingly//

void readfile(){
        switch (type)
            {


 	    case '1':
            scanf("%c",&mode);
	    options();
		    square();
            break;

            case '2':
            scanf("%c",&mode);
	    options();
            rectangle();
            break;

            default:
            break;
            }
    return;
}

//Whenever user moves a move We will calculate the number of moves a user uses to complete the game.It gives score accordingly to compare two users//


void score(){
    if(a==var&&b==temp&&lock==1){
        printf("You have used %d number of moves to complete the game\n",count);
        }
    else{
        printf("You exitted out of the game - No score\n");
        }

}

//This function check the user win or gives the comments to usrr of how to proceed.
//Everytime the user makes a move, This function works and checks if he get the key and he reached the end



void win(){
    if(a==var&&b==temp&&lock==0){
        printf("You have reached the end block but you dont have any key so go back and collect the key \n");
        }
    else if(a==var&&b==temp&&lock==1){
        printf("Congratulations you have won the game\n");
        ex=1;
        }
    return;
}
/*void hint(){
    printmaze();
}
*/
/*This function shows the keys used for navigation, hint, and to exit the game*/

void showdirections(){
    printf("0-top\n");
    printf("1-bottom\n");
    printf("2-left\n");
    printf("3-right\n");
    printf("4-exit\n");
    printf("5-hint\n\n");
}

/*This fucntion shows the directions available for the player to move and the walls around him*/

void key(){
    
    if(ans[a][b]%13==0&&lock==0){
        printf("\nYou have got the key\n");
        lock=1;
    }
    return;
}


///this function asks the user to choose the type of maze he want to play with.
//This function will ask the input again if the user chooses the wrong input. Until he chooses one of the correct inputs or he opts for exitting the game, it asks for the input

void mazetype(){

        printf("Choose the maze type you want to play");
        printf("\nSquare maze - 1\n");
        
	printf("rectangular maze - 2\n");
        printf("exit the game-3\n");
	scanf("%c",&type);
if(type>='1'&&type<='9'){
    switch (type)
        {
        case '1':
            printf("\nYou choose square maze");
        break;

        case '2':
            printf("\nYou choose rectangular maze");
        break;

        case '3':
	exit(0);
        break;
	
        default:
        
	    printf("Invalid input");
           printf("    \n\n                        ---------------------------    \n\n\n");
	    mazetype();
            break;
        }
}
else{


	printf("Invalid input");
           printf("    \n\n                        ---------------------------    \n\n\n");
	    mazetype();
}

return ;
}

//The beauty of the game lies in this part of game
//This while loop will exit in 3 conditions 1)winning the game 2)opts for quitting the game 3)moving to bomb
//when he gets one of those , the variable ex will get updated and loop gets break and comes out of loop
//Every function shown above will run and checks for every condition


void rungame(){
    a=1;
    b=1;

    while(1){
        printf("\nYou are currently at position of %d,%d",a,b);

       fprintf(reportfile,"You are currently at position of %d,%d\n",a,b);
        key();
        bombsuggest();
        printdirections();
        showdirections();
        move();
        dead();
        win();
        printf("\n\n\n     ---------    \n\n    ");
       if(ex==1){
	       break;
       }
	count++;
       }

}

//This is the main function in code
//It will execute every command now and then till the end of game 
//It closes the report which we opened at the beginning to save the moves of player

int main()
{
       report();
       mazetype();
       readfile();
       fprintf(reportfile, "\nEnter the level you want to play \n");
       rungame();
       score();
       fclose(reportfile);
       return 0;
}
