

/*******************************************************************************
 * File    : player_movement.c
 * Author  : Harsh Vardhan, Sandeep
 * Date    : 21-Oct-2022
 * Modified: Aditya [Added hint() and move() codes]
 * Date    : 23-Oct-2022
 * Purpose : Prints the direction based on conditions in which player can move and also controls the players movement via move() function, hint() function calls printmaze function to print the maze. 
 *         : Elabyrinth game
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void printdirections(){

    printf("\nYou have the following ways\n");
    printf("\n");
    printf("  ");
        if(ans[a][b]%2==0){
            printf("   ^ ");
        }
        else{
        printf("   o ");
        }

    printf("  \n");
    printf("\n");
    printf("     O\n");

        if(ans[a][b]%5==0){
            printf("< ");
        }
        else{
            printf("o ");
        }

    printf("  /");
    printf("|");
    printf("\\  ");

        if(ans[a][b]%7==0){
        printf(" >\n");
        }
        else{
        printf(" o\n");
        }

    printf("  ");
    printf("  /");
    printf("|");
    printf("\\  ");

    printf("\n");
    printf("\n");
    printf("  ");
        if(ans[a][b]%3==0){
        printf("   V \n");
        }
        else{
        printf("   o \n");
        }

    printf("\nEnter the direction you want to move :: \n");
    return;
}

void printmaze(){
        printf("\nIt's a %d*%d maze\n\n",var,temp) ;

    for(int h=1;h<=var;h++){
    for(int q=1;q<=temp;q++){

     printf("%d ",ans[h][q]) ;
    }
    printf("\n") ;
   }

   printf("\n") ;

}

void hint(){
    printmaze();
}

void empty_stdin(void){
	int c = getchar();
	while(c != '\n' && c != EOF){
		c = getchar();
	}
}


void move(){
    int choice;
    scanf("%d",&choice);

    int x=a;
    int y=b;
    int value=ans[x][y];
    switch (choice)
        {
        case 0:
            if(value%2==0){
            x=x-1;
            }
            else{
                printf("Invalid move");
            }
        break;

        case 1:
            if(value%3==0){
            x=x+1;
            }
            else{
                printf("invalid move");
            }
        break;

        case 2:
            if(value%5==0){
            y=y-1;
            }
            else{
                printf("Invalid move");
            }
        break;

        case 3:
            if(value%7==0){
            y=y+1;
 	    }
            else{
                printf("Invalid move");
            }
        break;

        case 4:
            ex=1;
         break;

        case 5:
            hint();
            printf("Use this hint to go further\n");
        break;

        default:
                printf("You enterd the wrong input\n");
		exit(0);
		//empty_stdin();
        break;
}
        a=x;
        b=y;
        return ;
}

