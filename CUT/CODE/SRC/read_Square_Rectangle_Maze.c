

/*******************************************************************************
 * File    : read_square_rectangle_Maze.c
 * Author  : Shivant Kamboj
 * Date    : 23-Oct-2022
 * Modified: Added rectangle mazes on 24-Oct-2022
 * Purpose : Players decide which type of maze do they want to play, depending on the choice its either square or rectangle maze.
 *         : Elabyrinth game
*******************************************************************************/

#include <stdio.h>


void square(){
        switch (mode)
            {
                case '1':
                if (EXIT_FAILURE ==  readMazeCSV("../data/square_easymaze.csv")){
                printf(" Easy maze.\n\n");
                }
                    printf("\nYou choose easy level , can do better \n");
                    break;

                case '2':
                if (EXIT_FAILURE ==  readMazeCSV("../data/square_mediummaze.csv")){
                printf("Medium maze.\n\n");
                }
                    printf("\nYou choose medium level (keep going:)\n");
                    break;

                case '3':
                if (EXIT_FAILURE ==  readMazeCSV("../data/square_hardmaze.csv")){
                printf("Hard maze.\n\n");
                }
                    printf("\nYou choose hard level wow\n");
                    break;

                case '9':
                EXIT_SUCCESS;
                exit(0);
                break;

                default:
		
		readfile();
                break;
            }
}



void rectangle(){
        switch (mode)
            {
                case '1':
                if (EXIT_FAILURE ==  readMazeCSV("../data/rectangle_easymaze.csv")){
                printf(" Easy maze.\n\n");
                }
                    printf("\nYou choose easy level (can do better:)\n");
                    break;

                case '2':
                if (EXIT_FAILURE ==  readMazeCSV("../data/rectangle_mediummaze.csv")){
                    printf("Medium maze.\n\n");
                }
                    printf("\nYou choose medium level (keep going:)\n");
                    break;

                case '3':
                if (EXIT_FAILURE ==  readMazeCSV("../data/rectangle_hardmaze.csv")){
                printf("Hard maze.\n\n");
                }
                    printf("\nYou choose hardmaze level (keep it up:)\n");
                    break;

                case '9':
                EXIT_SUCCESS;
                exit(0);

                default:
		readfile();
		break;
            }
}

